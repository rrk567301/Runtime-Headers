@class QCImageManager, NSMutableDictionary, QCStreamManager, QCEventManager;

@interface QCGraphicsContext : QCContext {
    QCImageManager *_imageManager;
    struct CGColorSpace { } *_colorspace;
    int _quality;
    int _cachingMode;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fullFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cleanFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fullBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cleanBounds;
    struct CGSize { double width; double height; } _pixelAspectRatio;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cleanAperture;
    NSMutableDictionary *_defaultOptions;
    QCEventManager *_eventManager;
    QCStreamManager *_streamManager;
    void *_unused2[1];
}

+ (struct CGColorSpace { } *)defaultColorSpace;
+ (Class)renderStateClass;

- (void)dealloc;
- (void)finalize;
- (BOOL)isValid;
- (void)invalidate;
- (id)initWithOptions:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGColorSpace { } *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })pixelAspectRatio;
- (id)eventManager;
- (id)imageManager;
- (void)setPixelAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)setCleanAperture:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cleanAperture;
- (BOOL)startRenderingPatch:(id)a0 options:(id)a1;
- (void)pauseRenderingPatch:(id)a0;
- (double)nextExecutionTimeForPatch:(id)a0 time:(double)a1 arguments:(id)a2;
- (BOOL)renderPatch:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)resumeRenderingPatch:(id)a0;
- (void)stopRenderingPatch:(id)a0;
- (BOOL)willPushRenderState:(id)a0;
- (void)didPushRenderState:(id)a0;
- (void)didPopRenderState:(id)a0;
- (void)_updateOptions;
- (id)initWithImageManager:(id)a0 options:(id)a1;
- (void)_finalize_QCGraphicsContext;
- (void)setQualityHint:(int)a0;
- (int)qualityHint;
- (void)setCachingModeHint:(int)a0;
- (int)cachingModeHint;
- (void)_updateDimensions;
- (id)imageManagerDefaultOptions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromFrameToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromBoundsToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullBounds;
- (id)streamManager;
- (BOOL)prerenderPatch:(id)a0 time:(double)a1 imageSizeHint:(struct CGSize { double x0; double x1; })a2 arguments:(id)a3;

@end
