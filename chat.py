# from openai import OpenAI

# client = OpenAI()

# prompt input("Prompt: ")

# response = client.response.create(
#     input=prompt,
#     model="gpt-5"
# )

# print(response.output_text)


# NOTE: Actual code from cs50 above, using ollama locally in absence of openai_api_key


import ollama
prompt = input("Prompt: ")

response = ollama.chat(
    model="llama3.2",
    messages=[
        {"role": "user", "content": prompt}
    ]
)

print(response['message']['content'])