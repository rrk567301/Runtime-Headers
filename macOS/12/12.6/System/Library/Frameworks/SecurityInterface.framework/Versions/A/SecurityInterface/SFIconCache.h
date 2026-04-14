@interface SFIconCache : NSObject {
    id _reserved_SFIconCache;
}

+ (id)sharedIconCache;

- (void)dealloc;
- (id)init;
- (id)cachedImageNamed:(id)a0;
- (id)cachedImageForItemClass:(unsigned int)a0;
- (id)cachedImageForItem:(struct __SecKeychainItem { } *)a0;

@end
