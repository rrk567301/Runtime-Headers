@interface SFIconCache : NSObject {
    id _reserved_SFIconCache;
}

+ (id)sharedIconCache;

- (id)init;
- (void)dealloc;
- (id)cachedImageForItem:(struct __SecKeychainItem { } *)a0;
- (id)cachedImageForItemClass:(unsigned int)a0;
- (id)cachedImageNamed:(id)a0;

@end
