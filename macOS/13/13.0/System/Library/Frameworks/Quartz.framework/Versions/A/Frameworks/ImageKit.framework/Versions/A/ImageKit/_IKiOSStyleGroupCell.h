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
- (void)drawImage:(id)a0;
- (double)opacity;
- (id)thumbnailImage;
- (double)baseline;
- (BOOL)isDisabled;
- (void)drawBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (id)statusImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionFrame;
- (double)topline;
- (void)drawOverlays;
- (id)visibleSubIndexes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageBorderFrame;
- (BOOL)acceptsDrop;
- (BOOL)hitTestWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canBeDoubleClicked;
- (void)drawShadow;
- (void)drawPlaceHolder;
- (void)drawTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrame;
- (void)drawSubtitle;
- (void)drawSelection;
- (void)drawWithComponentMask:(int)a0;
- (float)baselineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (float)toplineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (BOOL)canDisplayInlinePreview;
- (BOOL)isMasterCell;
- (float)baselineMargin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameNoScale;
- (void)drawHighlight;
- (void)drawGroupBackround:(BOOL)a0;
- (void)_addClickableAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 draggable:(BOOL)a1;
- (struct CGSize { double x0; double x1; })statusImageSize;
- (void)_drawPlaceHolder;
- (double)subThumbSize;
- (id)_subCellAtIndex:(unsigned long long)a0;
- (id)_thumbImageForSubcellAtIndex:(unsigned long long)a0;

@end
