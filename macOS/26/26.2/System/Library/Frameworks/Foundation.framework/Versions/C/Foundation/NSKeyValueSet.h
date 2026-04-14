@class NSString, NSKeyValueNonmutatingSetMethodSet, NSObject;

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (struct { id x0; id x1; })_proxyLocator;
- (void)_proxyNonGCFinalize;
- (id)member:(id)a0;
- (void)dealloc;

@end
