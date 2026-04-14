@interface DNSServiceObject : NSObject {
    struct _DNSServiceRef_t { } *_ref;
}

+ (id)objectWithRef:(struct _DNSServiceRef_t { } *)a0;

- (void)dealloc;
- (void)setRef:(struct _DNSServiceRef_t { } *)a0;
- (struct _DNSServiceRef_t { } *)ref;
- (id)initWithRef:(struct _DNSServiceRef_t { } *)a0;

@end
