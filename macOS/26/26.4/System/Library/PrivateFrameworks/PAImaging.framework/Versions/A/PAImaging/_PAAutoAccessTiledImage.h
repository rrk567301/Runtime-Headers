@class IPARegion;

@interface _PAAutoAccessTiledImage : PATiledImage {
    IPARegion *_autoAccessRegion;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_isBackingShared;
- (id)initWithTiledImage:(id)a0 region:(id)a1;

@end
