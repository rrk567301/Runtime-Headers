@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {
    unsigned long long _unique;
    _Atomic unsigned long long __uniqueChildCounter;
    NSString *_eDesc;
}

- (id)debugDescription;
- (id)endpointDescription;
- (BOOL)isRoot;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
