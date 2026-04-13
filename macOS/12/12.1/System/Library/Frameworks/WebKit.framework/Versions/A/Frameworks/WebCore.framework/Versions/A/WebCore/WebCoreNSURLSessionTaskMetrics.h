@class NSArray;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { void *m_ptr; } _transactionMetrics;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)transactionMetrics;
- (id)_initWithMetrics:(const void *)a0;

@end
