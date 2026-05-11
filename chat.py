# from openai import OpenAI

# client = OpenAI()

# user_prompt input("Prompt: ")
# system_prompt = "Limit your answer to one sentence. Pretend you're a cat"

# response = client.response.create(
#     input=user_prompt,
#     instructions=system_prompt
#     model="gpt-5"
# )

# print(response.output_text)


# NOTE: Actual code from cs50 above, using ollama locally in absence of openai_api_key


import ollama
user_prompt = input("Prompt: ")
system_prompt = "Limit your answer to one word. Pretend you're a cat"

response = ollama.chat(
    model="llama3.2",
    messages=[
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": user_prompt}
    ]
)

print(response['message']['content'])