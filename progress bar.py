import time
scale = 30
print("执行开始".center(scale//2,'-'))
start = time.perf_counter()
for i in range(scale + 1):
    a = 'O' * i
    b = '_' * (scale - i)
    c = (i/scale) * 100
    dur = time.perf_counter() - start
    print("\n{:^3.0f}%[{}>{}]{:.2f}s".format(c,a,b,dur),end="")
    time.sleep(0.75)
print("\n"+"执行结束".center(scale//2,'_'))
