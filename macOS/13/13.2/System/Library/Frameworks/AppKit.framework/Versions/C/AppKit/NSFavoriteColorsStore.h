@class NSArray;

@interface NSFavoriteColorsStore : NSObject {
    NSArray *_colorEntries;
    BOOL _updatingFromBacking;
}

@property (class, readonly) NSFavoriteColorsStore *defaultStore;
@property (class, readonly) NSFavoriteColorsStore *defaultGridCompatibleStore;
@property (class, readonly) NSFavoriteColorsStore *defaultListCompatibleStore;

@property (copy) NSArray *colorEntries;
@property (readonly, copy) NSArray *colors;

+ (BOOL)defersBackingUpdates;

- (void)dealloc;
- (id)init;
- (void)writeColorsToBacking;
- (void)moveColorAtIndex:(long long)a0 toIndex:(long long)a1 replacement:(BOOL)a2;
- (void)copyColorAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)insertColor:(id)a0 atIndex:(long long)a1;
- (void)addColor:(id)a0;
- (void)removeColorAtIndex:(long long)a0;
- (void)replaceColorAtIndex:(long long)a0 withColor:(id)a1;
- (void)deferredWriteColors;
- (void)updatingFromBacking:(id /* block */)a0;
- (void)updateColorsFromBacking;
- (BOOL)writeColorsToBacking:(id)a0;
- (id)colorsFromBacking;

@end
