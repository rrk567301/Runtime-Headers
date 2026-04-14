@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {
    struct OpaqueFigReentrantMutex { } *_lock;
}

- (void)setCapacity:(int)a0;
- (void)clear;
- (id)description;
- (id)initWithCapacity:(int)a0;
- (id)lastObject;
- (id)firstObject;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastTime;
- (void)appendObject:(id)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)enumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (void)extractTimeRangeFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 until:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 into:(id)a2 times:(id)a3;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })firstTime;
- (void)flushEntriesEarlierThan:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)reverseEnumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;

@end
