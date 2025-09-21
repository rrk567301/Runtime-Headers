@class TSWPRep, NSString, TSAGalleryLayout, NSObject, TSDImageDrawingHelper;
@protocol TSDContainerInfo;

@interface TSAGalleryRep : TSDRep <TSWPContainerTextEditingRep, TSDImageDrawingDataSource, TSKChangeSourceObserver> {
    TSDImageDrawingHelper *_drawingHelper;
}

@property (readonly, nonatomic) TSAGalleryLayout *galleryLayout;
@property (readonly, nonatomic) TSWPRep *captionRep;
@property (readonly, nonatomic) TSWPRep *containedRep;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_textureLayoutTransformInRootForLayout:(id)a0 isMagicMove:(char)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_textureRectForLayout:(id)a0 viewScale:(double)a1 isMagicMove:(char)a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_textureRenderTransformRelativeToTextureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLayout:(id)a1 viewScale:(double)a2 isMagicMove:(char)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)willBeRemoved;
- (id)childReps;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)updateChildrenFromLayout;
- (void)addChildTexturesToTextureSet:(id)a0 forDescription:(id)a1 passingTest:(id /* block */)a2;
- (id)textureForDescription:(id)a0;
- (void)updateHitTestingForTextureStage:(unsigned long long)a0 isAtEndOfBuild:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_imageContainerRectForContext:(struct CGContext { } *)a0;
- (id)galleryInfo;
- (id)imageDrawingHelperAdjustedImageData:(id)a0;
- (id)imageDrawingHelperImageData:(id)a0;
- (char)imageDrawingHelperImageHasAlpha:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageDrawingHelperImageRect:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)a0;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)a0;
- (id)imageDrawingHelperThumbnailImageData:(id)a0;
- (void)invalidateCurrentItem;
- (id)layoutsForChildReps;
- (void)p_announceNewItemForAccessibilityIfNeeded;
- (void)p_drawImageInContext:(struct CGContext { } *)a0 forLayer:(char)a1;
- (id)p_emptyPlaceholderBackgroundColor;
- (id)p_emptyPlaceholderImage;
- (id)p_galleryItemForTextureStage:(unsigned long long)a0 isIncoming:(char)a1;
- (char)p_isEmpty;
- (id)p_newTextureForStage:(unsigned long long)a0 isIncoming:(char)a1 includeImage:(char)a2 includeCaption:(char)a3 size:(struct CGSize { double x0; double x1; })a4 offset:(struct CGPoint { double x0; double x1; })a5 renderTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a6;
- (char)p_prefersHDRRendering;
- (void)p_renderTextureInContext:(struct CGContext { } *)a0 includeImage:(char)a1 includeCaption:(char)a2 renderTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (char)p_shouldIncludeItemCaptionTextForStage:(unsigned long long)a0 isIncoming:(char)a1;

@end
