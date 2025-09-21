@class NSString, NSObject;

@interface NSKeyValueProxyShareKey : NSObject <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;

- (void)_proxyNonGCFinalize;
- (struct { id x0; id x1; })_proxyLocator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;

@end
