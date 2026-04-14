@class IKImageWrapper, IKImageBrowserGridGroup;

@interface _IKiOSStyleGroupCell : IKIconCell {
    IKImageWrapper *_titleSelectionImage;
    double _dimFactor;
    unsigned char _ghost : 1;
    unsigned char _highlighted : 1;
    unsigned char _supportsStatusImage : 2;
    double _contentScroll;
}

@property double dimFactor;
@property double highlightFactor;
@property BOOL ghost;
@property BOOL highlighted;
@property (retain) IKImageBrowserGridGroup *group;

+ (double)contentInsetForCellSize:(double)a0;
+ (double)subThumbSizeForCellSize:(double)a0;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)isSelectable;
- (double)opacity;
- (void)drawImage:(id)a0;
- (id)thumbnailImage;
- (double)baseline;
- (BOOL)isDisabled;
- (void)drawBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (id)statusImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionFrame;
- (double)topline;
- (void)drawPlaceHolder;
- (void)drawSelection;
- (void)drawOverlays;
- (void)drawWithComponentMask:(int)a0;
- (id)visibleSubIndexes;
- (double)subThumbSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageBorderFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrame;
- (void)drawShadow;
- (void)drawTitle;
- (void)drawSubtitle;
- (BOOL)acceptsDrop;
- (BOOL)hitTestWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canBeDoubleClicked;
- (BOOL)isMasterCell;
- (float)baselineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (float)toplineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (BOOL)canDisplayInlinePreview;
- (float)baselineMargin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameNoScale;
- (void)_addClickableAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 draggable:(BOOL)a1;
- (void)drawHighlight;
- (struct CGSize { double x0; double x1; })statusImageSize;
- (void)_drawPlaceHolder;
- (id)_subCellAtIndex:(unsigned long long)a0;
- (void)drawGroupBackround:(BOOL)a0;
- (id)_thumbImageForSubcellAtIndex:(unsigned long long)a0;

@end
