@interface IKCacheManagerRegistry : NSObject {
    struct __CFDictionary { } *_registry;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)registerCacheManager:(id)a0;
- (void)unregisterCacheManager:(id)a0;

@end
