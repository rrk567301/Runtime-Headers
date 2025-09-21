@class KHBaseLayer, KHLayoutRenderLayer, KHTreatmentRenderLayer, KHDrawingContentLayer, KHFrame, KHPhotoContentLayer;
@protocol KHPhotoContentLayerDelegate, KHFrameContentLayerProvider;

@interface KHFrameRenderLayer : KHBaseLayer

@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) KHTreatmentRenderLayer *backgroundRenderLayer;
@property (retain, nonatomic) KHBaseLayer *contentRenderLayer;
@property (retain, nonatomic) KHTreatmentRenderLayer *foregroundRenderLayer;
@property (readonly, nonatomic) KHLayoutRenderLayer *parentLayoutRenderLayer;
@property (readonly, nonatomic) KHPhotoContentLayer *photoContentLayer;
@property (readonly, nonatomic) KHDrawingContentLayer *drawingContentLayer;
@property (retain, nonatomic) KHFrame *frameObject;
@property (nonatomic) double drawingScale;
@property (nonatomic) struct CGPoint { double x; double y; } drawingOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) struct { double x0; char x1; double x2; char x3; double x4; char x5; double x6; char x7; } adjustedBleedInsets;
@property (nonatomic) unsigned long long contentClipMode;
@property (nonatomic) struct CGColor { } *contentBackgroundColor;
@property (nonatomic) double maskOutsetLimit;
@property (nonatomic) char clipsToBounds;
@property (nonatomic) char canDrawIntoBackground;
@property (nonatomic, getter=isFixed) char fixed;
@property (nonatomic, getter=isEditing) char editing;
@property (nonatomic, getter=editingActive) char editingActive;
@property (nonatomic) id<KHPhotoContentLayerDelegate> photoContentDelegate;
@property (nonatomic) id<KHFrameContentLayerProvider> contentLayerDelegate;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setContentsScale:(double)a0;
- (void)setMasksToBounds:(char)a0;
- (void)setNeedsLayout;
- (void)updateVisibility;
- (void)willDisappear;
- (void)willAppear;
- (void)setContentZoom:(double)a0;
- (void)backfillIfNecessaryInOperationQueue:(id)a0;
- (double)maximumTranslationFromEdge:(unsigned int)a0;
- (void)setContentTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateBackgroundRenderLayer;
- (void)updateContentRenderLayer;
- (void)updateContentRenderLayerMask;
- (void)updateContentsScale;
- (void)updateForegroundRenderLayer;

@end
