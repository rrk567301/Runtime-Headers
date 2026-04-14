@interface CLGNSSStateQueryAssertionResponse : NSObject {
    struct unique_ptr<CLGNSSStateQueryAssertionResponseInternal, std::default_delete<CLGNSSStateQueryAssertionResponseInternal>> { struct CLGNSSStateQueryAssertionResponseInternal *__ptr_; } fInternal;
}

+ (id)newAssertionForBundle:(id)a0 withReason:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
+ (id)newAssertionForBundleIdentifier:(id)a0 withReason:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;

- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRegistrationMessageName:(const char *)a0 messagePayload:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;

@end
