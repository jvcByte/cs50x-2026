# from openai import OpenAI

# client = OpenAI()

# response = client.response.create(
#     input="In one sentence, what is CS50",
#     model="gpt-5"
# )

# print(response.output_text)


# NOTE: Actual code from cs50 above, using ollama locally in absence of openai_api_key


import ollama

response = ollama.chat(
    model="llama3.2",
    messages=[
        {"role": "user", "content": "In one sentence, what is CS50"}
    ]
)

print(response['message']['content'])