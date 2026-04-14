@class NSIndexSet;

@interface PhotosUICore.MediaViewContentTungstenLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider, PXGViewSource> {
    void /* unknown type, empty encoding */ updater;
    void /* unknown type, empty encoding */ representations;
    void /* unknown type, empty encoding */ viewModelObservation;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ transitionType;
    void /* unknown type, empty encoding */ analysisControllerObservation;
    void /* unknown type, empty encoding */ analysisSpriteIndex;
    void /* unknown type, empty encoding */ analysisSpriteMediaVersion;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (id)initWithComposition:(id)a0;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)layout:(id)a0 navigationObjectReferenceForSublayoutAtIndex:(long long)a1;
- (void)referenceSizeDidChange;
- (void)updateRepresentationLayouts;
- (void)updateSprites;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
