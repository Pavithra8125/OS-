import os
pid=os.fork()
if(pid >0):
  print(f"parent process pid = {os.getpid()} " )
  os.wait()
elif(pid==0)
  print(f"child process pid ={os.getpid()} ")
  os._exit(0)
else:
  print("fork failed")
  
