@interface VFXRemoteRendererProxyRegistry : NSObject {
    struct __CFDictionary { } *_proxies;
}

+ (id)sharedRegistry;

- (id)init;
- (void)dealloc;
- (id)newProxyWithIdentifier:(unsigned long long)a0;
- (id)proxyWithIdentifier:(unsigned long long)a0;

@end
