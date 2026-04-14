@class IKImageCell;

@interface IKImageFlowCell : NSObject {
    IKImageCell *_imageCell;
    float _position[3];
    float _rotation;
    double _aspectRatio;
    float _fog;
    float _importFactor;
    unsigned char _highlightTested : 1;
    unsigned char _hasHighlight : 1;
    unsigned char _sourceRespondsToDimmed : 1;
    unsigned char _inlinePreview : 1;
}

- (void)dealloc;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)invalidate;
- (float)rotation;
- (float *)position;
- (BOOL)draw;
- (double)aspectRatio;
- (id)representedItem;
- (void)setRotation:(float)a0;
- (BOOL)inlinePreviewMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (float)fog;
- (void)setInlinePreviewMode:(BOOL)a0;
- (void)imageDidChange;
- (int)_sizeToDraw;
- (unsigned long long)indexOfRepresentedItem;
- (void)datasourceItemDidChange;
- (void)didRecoverImageFromCache;
- (float)importFactor;
- (void)setImportFactor:(float)a0;
- (void)setPositionX:(float)a0 Y:(float)a1 Z:(float)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageFrame:(BOOL)a0;
- (void)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alpha:(float)a3 fog:(float)a4 premultiplied:(BOOL)a5 gradient:(BOOL)a6 interpolate:(BOOL)a7;
- (void)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forAA:(BOOL)a2 reflection:(BOOL)a3 alpha:(float)a4 fog:(float)a5 baseline:(float)a6;
- (float)baselineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeHolderFrame;
- (void)drawPlaceHolder:(BOOL)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 reflection:(BOOL)a2;
- (void)setFog:(float)a0;
- (float)toplineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (void)drawHighlight:(BOOL)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawCenteredIcon:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 reflection:(BOOL)a2;

@end
