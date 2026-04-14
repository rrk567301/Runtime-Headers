@interface PGRootFIFO : PGFIFO {
    unsigned int _readOffset;
    unsigned int _lastReadOffset;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _written;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _read;
    void *_basePointer;
    void *_cmdStart;
    unsigned int _pendingAdvance;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _faultOffset;
}

@property unsigned int written;
@property unsigned int read;
@property unsigned int startOffset;

- (void)reset;
- (void)resetPending;
- (id).cxx_construct;
- (void)advance;
- (void)setFaultOffset:(unsigned int)a0;
- (void)teardownMapping;
- (unsigned int)faultOffset;
- (BOOL)getFifoBytes:(unsigned long long)a0 into:(void *)a1;
- (id)initWithDevice:(id)a0 length:(unsigned int)a1 basePointer:(void *)a2 startOffset:(unsigned int)a3 lastPending:(void *)a4;
- (BOOL)isRootFifo;
- (void)latchCommandOffset;
- (BOOL)setupMapping;
- (unsigned int)stampIndex;

@end
