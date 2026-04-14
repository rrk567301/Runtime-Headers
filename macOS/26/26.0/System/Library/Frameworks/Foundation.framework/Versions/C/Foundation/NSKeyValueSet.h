@class NSString, NSKeyValueNonmutatingSetMethodSet, NSObject;

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (unsigned long long)count;
- (id)member:(id)a0;
- (struct { id x0; id x1; })_proxyLocator;
- (id)objectEnumerator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;

@end
