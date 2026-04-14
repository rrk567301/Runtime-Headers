@interface WebMainThreadInvoker : NSProxy {
    id target;
    struct RetainPtr<id> { id m_ptr; } exception;
}

- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id).cxx_construct;
- (void)handleException:(id)a0;

@end
