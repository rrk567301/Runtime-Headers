@interface PhotosUICore.CarouselSinglePageLayout : PXGLayout {
    void /* unknown type, empty encoding */ clippingInsets;
    void /* unknown type, empty encoding */ edgeClippingMaskEffects;
    void /* unknown type, empty encoding */ mainMaskingEffects;
    void /* unknown type, empty encoding */ updater;
}

- (void)updateContent;
- (void).cxx_destruct;
- (id)init;
- (void)updateIfNeeded;
- (void)displayScaleDidChange;
- (void)entityManagerDidChange;
- (void)updateMaskingEffects;

@end
