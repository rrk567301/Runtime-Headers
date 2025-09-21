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
@property char ghost;
@property char highlighted;
@property (retain) IKImageBrowserGridGroup *group;

+ (double)contentInsetForCellSize:(double)a0;
+ (double)subThumbSizeForCellSize:(double)a0;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (double)opacity;
- (void)drawImage:(id)a0;
- (char)isSelectable;
- (id)thumbnailImage;
- (double)baseline;
- (char)isDisabled;
- (void)drawBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (id)statusImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionFrame;
- (double)topline;
- (void)drawPlaceHolder;
- (struct CGSize { double x0; double x1; })statusImageSize;
- (void)_addClickableAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 draggable:(char)a1;
- (void)_drawPlaceHolder;
- (id)_subCellAtIndex:(unsigned long long)a0;
- (id)_thumbImageForSubcellAtIndex:(unsigned long long)a0;
- (char)acceptsDrop;
- (float)baselineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (float)baselineMargin;
- (char)canBeDoubleClicked;
- (char)canDisplayInlinePreview;
- (void)drawGroupBackround:(char)a0;
- (void)drawHighlight;
- (void)drawOverlays;
- (void)drawSelection;
- (void)drawShadow;
- (void)drawSubtitle;
- (void)drawTitle;
- (void)drawWithComponentMask:(int)a0;
- (char)hitTestWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageBorderFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameNoScale;
- (char)isMasterCell;
- (double)subThumbSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrame;
- (float)toplineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (id)visibleSubIndexes;

@end
