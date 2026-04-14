@class NSArray;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { void *m_ptr; } _transactionMetrics;
    struct RefPtr<WTF::RefCountedSerialFunctionDispatcher, WTF::RawPtrTraits<WTF::RefCountedSerialFunctionDispatcher>, WTF::DefaultRefDerefTraits<WTF::RefCountedSerialFunctionDispatcher>> { struct RefCountedSerialFunctionDispatcher *m_ptr; } _targetDispatcher;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)transactionMetrics;
- (id)_initWithMetrics:(void *)a0 onTarget:(struct RefCountedSerialFunctionDispatcher { void /* function */ **x0; } *)a1;

@end
