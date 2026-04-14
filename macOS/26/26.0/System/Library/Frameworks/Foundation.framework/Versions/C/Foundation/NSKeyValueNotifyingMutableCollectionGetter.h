@class NSKeyValueProxyGetter;

@interface NSKeyValueNotifyingMutableCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueProxyGetter *_mutableCollectionGetter;
}

- (void)dealloc;
- (id)mutableCollectionGetter;
- (id)initWithContainerClassID:(id)a0 key:(id)a1 mutableCollectionGetter:(id)a2 proxyClass:(Class)a3;

@end
