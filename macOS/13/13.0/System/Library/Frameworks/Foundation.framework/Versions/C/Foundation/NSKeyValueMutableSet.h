@class NSString, NSObject;

@interface NSKeyValueMutableSet : NSMutableSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;

- (void)dealloc;
- (struct { id x0; id x1; })_proxyLocator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)_proxyNonGCFinalize;

@end
