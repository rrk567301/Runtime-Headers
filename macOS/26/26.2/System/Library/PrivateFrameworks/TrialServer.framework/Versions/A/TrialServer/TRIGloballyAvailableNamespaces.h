@class TRIKVStore;

@interface TRIGloballyAvailableNamespaces : NSObject {
    TRIKVStore *_kvStore;
}

- (id)namespaces;
- (void).cxx_destruct;
- (BOOL)setNamespaces:(id)a0;
- (id)initWithKVStore:(id)a0;

@end
