@interface VFXRemoteRendererProxyRegistry : NSObject {
    struct __CFDictionary { } *_proxies;
}

+ (id)sharedRegistry;

- (void)dealloc;
- (id)init;
- (id)newProxyWithIdentifier:(unsigned long long)a0;
- (id)proxyWithIdentifier:(unsigned long long)a0;

@end
