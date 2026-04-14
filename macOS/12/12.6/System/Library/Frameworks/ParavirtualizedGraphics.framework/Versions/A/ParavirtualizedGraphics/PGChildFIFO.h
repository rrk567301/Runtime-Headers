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
}

@property (readonly) unsigned long long rootTaskOffset;

- (BOOL)start;
- (void)stop;
- (void)advance;
- (void)resetPending;
- (unsigned int)faultOffset;
- (unsigned int)stampIndex;
- (id)initWithDevice:(id)a0 baseNode:(struct { _Atomic unsigned int x0; _Atomic unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned int x5; } *)a1 baseAddress:(void *)a2 fifoIndex:(unsigned int)a3 totalLength:(unsigned int)a4 commandLength:(unsigned int)a5 rootTaskOffset:(unsigned long long)a6 restoring:(BOOL)a7;
- (void)setFaultOffset:(unsigned int)a0;
- (BOOL)isRootFifo;
- (void)latchCommandOffset;
- (BOOL)getFifoBytes:(unsigned long long)a0 into:(void *)a1;

@end
