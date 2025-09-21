@class NSString, PXExtendedTraitCollection;

@interface PXCuratedLibraryStyleGuide : PXObservable <PXChangeObserver>

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) unsigned long long secondaryToolbarStyle;
@property (nonatomic) double lateralMargin;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long secondaryToolbarPlacement;
@property (nonatomic) struct CGSize { double width; double height; } secondaryToolbarSize;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } secondaryToolbarContentInsets;
@property (nonatomic) long long toggleAspectFitButtonPlacement;
@property (nonatomic) long long zoomButtonsButtonPlacement;
@property (nonatomic) BOOL secondaryToolbarRenderedExternally;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } secondaryToolbarPadding;
@property (nonatomic) double maximumAccessoryViewPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_update;
- (void)_invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0 secondaryToolbarStyle:(unsigned long long)a1;
- (id)zoomLevelControlTextColorOverLegibilityGradient:(BOOL)a0;

@end
