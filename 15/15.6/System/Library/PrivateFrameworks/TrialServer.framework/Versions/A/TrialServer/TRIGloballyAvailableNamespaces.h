@class TRIKVStore;

@interface TRIGloballyAvailableNamespaces : NSObject {
    TRIKVStore *_kvStore;
}

- (void).cxx_destruct;
- (id)namespaces;
- (char)setNamespaces:(id)a0;
- (id)initWithKVStore:(id)a0;

@end
