from pycparser import c_parser, c_ast, parse_file, c_generator


def extract_definitions(filename):
    # Parse the file
    ast = parse_file(filename, use_cpp=True)

    # Create a generator
    generator = c_generator.CGenerator()

    # Traverse the syntax tree and extract function definitions
    definitions = []
    for ext in ast.ext:
        if isinstance(ext, c_ast.FuncDef):
            definitions.append(generator.visit(ext))

    return definitions


def generate_readme():
    with open('README.md', 'w') as f:
        f.write('# Project Title\n\n')
        f.write('## File Descriptions\n\n')
        for filename in os.listdir('.'):
            if filename.endswith('.c'):
                f.write(f'### {filename}\n')
                definitions = extract_definitions(filename)
                for definition in definitions:
                    f.write(f'{definition}\n\n')


generate_readme()
