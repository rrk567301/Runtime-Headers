@interface PhotosUIApps.PUXStoryColorGradeEditorContentLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ previewClip;
    void /* unknown type, empty encoding */ previewClipTimeRange;
    void /* unknown type, empty encoding */ captionHeightsByRow;
    void /* unknown type, empty encoding */ storyModelObservation;
    void /* unknown type, empty encoding */ viewModelObservation;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ hasVerticalScrollingContent;
}

@property (nonatomic, readonly) long long scrollableAxis;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)visibleRectDidChange;
- (id)initWithComposition:(id)a0;
- (void)referenceSizeDidChange;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(id *)a2;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;

@end
