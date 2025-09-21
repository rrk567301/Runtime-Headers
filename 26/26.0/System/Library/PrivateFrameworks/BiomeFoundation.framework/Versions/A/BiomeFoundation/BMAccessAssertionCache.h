@class NSMapTable;

@interface BMAccessAssertionCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_extensionCache;
    NSMapTable *_assertionsMap;
}

+ (id)sharedCache;

- (id)init;
- (void)releaseAssertion:(id)a0;
- (void).cxx_destruct;
- (id)_sandboxExtensionWithDescriptor:(id)a0 extensionToken:(id)a1 container:(id)a2 path:(id)a3;
- (id)assertionForAccessDescriptor:(id)a0;
- (id)createAssertionForAccessDescriptor:(id)a0 extensionToken:(id)a1 container:(id)a2 path:(id)a3;

@end
