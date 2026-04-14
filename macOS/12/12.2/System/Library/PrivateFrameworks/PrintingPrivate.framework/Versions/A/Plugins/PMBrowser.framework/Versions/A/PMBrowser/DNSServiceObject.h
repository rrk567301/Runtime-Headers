@interface DNSServiceObject : NSObject {
    struct _DNSServiceRef_t { } *_ref;
}

+ (id)objectWithRef:(struct _DNSServiceRef_t { } *)a0;

- (void)dealloc;
- (struct _DNSServiceRef_t { } *)ref;
- (void)setRef:(struct _DNSServiceRef_t { } *)a0;
- (id)initWithRef:(struct _DNSServiceRef_t { } *)a0;

@end
