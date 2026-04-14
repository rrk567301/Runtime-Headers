@class NSString, KHLayout, KHTreatmentRenderLayer, KHProject;
@protocol KHLayoutViewDelegate;

@interface KHLayoutView : KHFrameView <KHTreatmentRenderLayerDelegate, NSDraggingDestination> {
    KHLayout *_layoutObject;
    KHProject *_layoutProject;
}

@property (retain, nonatomic) KHTreatmentRenderLayer *treatmentRenderLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousBounds;
@property (retain, nonatomic) KHLayout *layoutObject;
@property (readonly) struct CGPoint { double x; double y; } layoutTranslation;
@property (getter=isAnimating) BOOL animating;
@property (weak) id<KHLayoutViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)mouseDown:(id)a0;
- (double)drawingScale;
- (id)selectionManager;
- (void)mouseUp:(id)a0;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (unsigned long long)draggingEntered:(id)a0;
- (void)mouseMoved:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)viewDidEndLiveResize;
- (id)subframes;
- (void)_sendMouseDown:(id)a0;
- (void)showPageNumber:(BOOL)a0;
- (id)enclosingLayoutView;
- (void)getLayoutInfo:(id)a0;
- (BOOL)isBackCover;
- (BOOL)isFrontCover;
- (void)layoutFrameViews;
- (void)layoutTreatmentRenderLayer;
- (id)selectableObject;
- (void)showAppleLogo:(BOOL)a0;
- (void)showLayoutInspector:(id)a0;
- (void)treatmentRenderLayer:(id)a0 didDrawTreatmentBackgroundInContext:(struct CGContext { } *)a1;
- (void)treatmentRenderLayer:(id)a0 didDrawTreatmentForegroundInContext:(struct CGContext { } *)a1;
- (void)updateBackgroundPhotoFrameView;
- (void)updateBrandingView;
- (void)updateTreatmentLayerVisibility;
- (BOOL)validateDrag:(id)a0;

@end
