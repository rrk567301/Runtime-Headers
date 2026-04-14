@class NSString, IKOpenGLRoundedRectRenderer;

@interface IKOpenGLRenderer : NSObject <IKRenderer> {
    struct __CFDictionary { } *_textRenderers;
    IKOpenGLRoundedRectRenderer *_roundedRectRenderer;
    float _color[4];
    void *_programObject;
    BOOL _autoInstallBlendMode;
    BOOL _enableMagFilter;
    struct { double x; double y; } _offset;
    unsigned long long _currentScaleFactor;
    BOOL _enableSubpixelAntialiasing;
}

@property BOOL perspectivePushed;
@property BOOL enableSubpixelAntialiasing;
@property unsigned long long scaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (struct { double x0; double x1; })offset;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endDrawing;
- (BOOL)renderBezelGroupWithPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(int)a1 radius:(float)a2 strokeColor:(float *)a3 fillColor:(float *)a4 lineWidth:(int)a5;
- (void)setupViewportWithView:(id)a0;
- (void)setColorRed:(float)a0 Green:(float)a1 Blue:(float)a2 Alpha:(float)a3;
- (void)drawText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withAttributes:(id)a2 withAlpha:(float)a3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withLineWidth:(float)a1;
- (void)drawRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(float)a1 lineWidth:(float)a2 cacheIt:(BOOL)a3;
- (void)flushTextRenderer;
- (void)installClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)uninstallClipRect;
- (void)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alpha:(float)a3;
- (void)clearViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginDrawingInView:(id)a0;
- (void)drawRectShadow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAlpha:(float)a1;
- (void)fillRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(float)a1 cacheIt:(BOOL)a2;
- (int)rendererType;
- (void)setEnableMagFilter:(BOOL)a0;
- (void)drawLineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)drawRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(float)a1 strokeColor:(float *)a2 fillColor:(float *)a3 lineWidth:(int)a4;
- (void)fillGradientInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bottomColor:(id)a1 topColor:(id)a2;
- (void)drawPlaceHolderWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAlpha:(float)a1;
- (void)flushRenderer;
- (void)emptyCaches;
- (id)textRenderer;
- (BOOL)enableMagFilter;
- (BOOL)autoInstallBlendMode;
- (void)setAutoInstallBlendMode:(BOOL)a0;
- (void)resetOffset;

@end
