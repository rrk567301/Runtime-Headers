@interface CLAssertion : NSObject {
    struct CLAssertionInternal { id x0; struct CLConnectionClient *x1; } *_internal;
}

- (void)invalidate;
- (void)dealloc;
- (id)initWithRegistrationMessageName:(const char *)a0 messageDictionary:(id)a1;

@end
