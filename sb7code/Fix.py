import os

# 获取当前目录路径
current_dir = os.getcwd()

# 遍历当前目录及其子目录的所有文件
for root, dirs, files in os.walk(current_dir):
    for filename in files:
        # 只处理 .cpp 文件
        if filename.endswith(".cpp"):
            file_path = os.path.join(root, filename)
            print(f"处理文件: {file_path}")

            # 打开文件并读取内容
            try:
                with open(file_path, 'r', encoding='utf-8', errors='ignore') as file:
                    content = file.read()

                # 重新以 UTF-8 编码保存文件
                with open(file_path, 'w', encoding='utf-8') as file:
                    file.write(content)

                print(f"文件已保存为 UTF-8: {file_path}")
            except Exception as e:
                print(f"处理文件时出错: {file_path}, 错误: {e}")