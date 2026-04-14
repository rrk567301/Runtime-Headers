@class NSString, NSKeyValueNonmutatingSetMethodSet, NSObject;

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (id)member:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)objectEnumerator;
- (void)dealloc;
- (struct { id x0; id x1; })_proxyLocator;

@end
