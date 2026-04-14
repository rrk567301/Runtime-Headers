@class IPARegion;

@interface _PAAutoAccessTiledImage : PATiledImage {
    IPARegion *_autoAccessRegion;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTiledImage:(id)a0 region:(id)a1;
- (BOOL)_isBackingShared;

@end
