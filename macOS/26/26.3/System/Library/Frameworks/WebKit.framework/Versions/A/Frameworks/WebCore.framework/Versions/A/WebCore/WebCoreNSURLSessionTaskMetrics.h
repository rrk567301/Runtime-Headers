@class NSArray, WebCoreNSURLSessionTaskTransactionMetrics;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { WebCoreNSURLSessionTaskTransactionMetrics *m_ptr; } _transactionMetrics;
    struct RefPtr<WTF::GuaranteedSerialFunctionDispatcher, WTF::RawPtrTraits<WTF::GuaranteedSerialFunctionDispatcher>, WTF::DefaultRefDerefTraits<WTF::GuaranteedSerialFunctionDispatcher>> { struct GuaranteedSerialFunctionDispatcher *m_ptr; } _targetDispatcher;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (void).cxx_destruct;
- (void)dealloc;
- (id)transactionMetrics;
- (id).cxx_construct;
- (id)_initWithMetrics:(void *)a0 onTarget:(void *)a1;

@end
