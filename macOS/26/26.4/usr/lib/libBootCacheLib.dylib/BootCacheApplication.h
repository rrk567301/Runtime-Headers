@class NSString, BootCacheItemStoreKey;

@interface BootCacheApplication : BootCacheBundle {
    BootCacheItemStoreKey *_extensionlessResourceURLsDictionaryKey;
    BootCacheItemStoreKey *_icnsResourceURLsDictionaryKey;
}

@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSString *applicationIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithStore:(id)a0 key:(id)a1;
- (id)resourceURL:(id)a0 withExtension:(id)a1;

@end
