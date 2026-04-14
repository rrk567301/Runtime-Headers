@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {
    unsigned long long _unique;
    _Atomic unsigned long long __uniqueChildCounter;
    NSString *_eDesc;
}

- (id)debugDescription;
- (BOOL)isRoot;
- (id)endpointDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
