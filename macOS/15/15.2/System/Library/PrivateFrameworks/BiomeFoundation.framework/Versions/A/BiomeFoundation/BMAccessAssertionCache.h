@class _PASLock, NSString;

@interface BMAccessAssertionCache : NSObject {
    _PASLock *_lock;
    NSString *_lastPersonaIdentifier;
}

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidateCacheIfPersonaSwitched:(id)a0;
- (id)_makeAssertionWithDescriptor:(id)a0 extensionToken:(id)a1 container:(id)a2 path:(id)a3;
- (id)assertionForAccessDescriptor:(id)a0;
- (id)createAssertionForAccessDescriptor:(id)a0 extensionToken:(id)a1 container:(id)a2 path:(id)a3;

@end
