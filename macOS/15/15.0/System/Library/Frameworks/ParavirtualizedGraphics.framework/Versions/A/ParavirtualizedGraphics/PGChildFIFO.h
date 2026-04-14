@interface PGChildFIFO : PGFIFO {
    unsigned int _readOffset;
    unsigned int _lastReadOffset;
    unsigned int _lastReadCount;
    unsigned int _readCount;
    unsigned int _cacheWritten;
    struct { _Atomic unsigned int x0; _Atomic unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned int x5; } *_baseNode;
    void *_basePointer;
    void *_cmdStart;
    unsigned int _stampIndex;
    _Atomic unsigned int _faultOffset;
}

- (void)dealloc;
- (BOOL)start;
- (void)stop;
- (void)advance;
- (void)resetPending;
- (void)teardownMapping;
- (void)setFaultOffset:(unsigned int)a0;
- (unsigned int)faultOffset;
- (BOOL)getFifoBytes:(unsigned long long)a0 into:(void *)a1;
- (id)initWithDevice:(id)a0 baseNode:(struct { _Atomic unsigned int x0; _Atomic unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned int x5; } *)a1 fifoIndex:(unsigned int)a2 restoring:(BOOL)a3 lastPending:(_Atomic unsigned int *)a4;
- (BOOL)isRootFifo;
- (void)latchCommandOffset;
- (BOOL)setupMapping;
- (unsigned int)stampIndex;

@end
