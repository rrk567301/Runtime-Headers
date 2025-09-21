@interface PhotosUICore.CarouselSinglePageLayout : PXGLayout {
    void /* unknown type, empty encoding */ clippingInsets;
    void /* unknown type, empty encoding */ edgeClippingMaskEffects;
    void /* unknown type, empty encoding */ mainMaskingEffects;
    void /* unknown type, empty encoding */ updater;
}

- (void)updateContent;
- (id)init;
- (void)updateIfNeeded;
- (void).cxx_destruct;
- (void)displayScaleDidChange;
- (void)entityManagerDidChange;
- (void)updateMaskingEffects;

@end
