@class TRIKVStore;

@interface TRIGloballyAvailableNamespaces : NSObject {
    TRIKVStore *_kvStore;
}

- (void).cxx_destruct;
- (BOOL)setNamespaces:(id)a0;
- (id)namespaces;
- (id)initWithKVStore:(id)a0;

@end
