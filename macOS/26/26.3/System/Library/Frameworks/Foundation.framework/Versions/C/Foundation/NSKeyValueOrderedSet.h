@class NSString, NSKeyValueNonmutatingOrderedSetMethodSet, NSObject;

@interface NSKeyValueOrderedSet : NSOrderedSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingOrderedSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_proxyNonGCFinalize;
- (unsigned long long)indexOfObject:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)objectsAtIndexes:(id)a0;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (struct { id x0; id x1; })_proxyLocator;

@end
