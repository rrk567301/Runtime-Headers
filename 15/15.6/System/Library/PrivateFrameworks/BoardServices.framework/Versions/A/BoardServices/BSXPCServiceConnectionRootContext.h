@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {
    unsigned long long _unique;
    _Atomic unsigned long long __uniqueChildCounter;
    NSString *_eDesc;
}

- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isRoot;
- (id)endpointDescription;

@end
