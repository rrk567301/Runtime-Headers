@class CIContext;
@protocol MTLDevice;

@interface CIImageProcessorInOut : NSObject {
    struct __IOSurface { } *_surface;
    BOOL _usesSRGB;
    void *_context;
    void *_mtlTexture;
    BOOL _surfaceLocked;
    BOOL _onlyMetal;
    CIContext *_metalContext;
    unsigned long long _digest;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } region;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) BOOL usesSRGBTransferFunction;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long digest;

- (id)debugQuickLookObject;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(void *)a1 digest:(unsigned long long)a2 allowSRGB:(BOOL)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 onlyMetal:(BOOL)a5 context:(void *)a6;

@end
