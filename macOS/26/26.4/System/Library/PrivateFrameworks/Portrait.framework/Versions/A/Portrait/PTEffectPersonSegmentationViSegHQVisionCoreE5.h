@class PTMetalContext, NSString, VisionCoreE5RTFunction, NSObject, VisionCoreVideoSegmentationE5NetworkDescriptor;
@protocol MTLTexture, OS_dispatch_semaphore;

@interface PTEffectPersonSegmentationViSegHQVisionCoreE5 : NSObject <PTEffectPersonSegmentationProvider> {
    struct CGSize { double width; double height; } _colorSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _segmentationSize;
    VisionCoreE5RTFunction *_e5Functions[3];
    struct e5rt_execution_stream *_es[3];
    struct e5rt_execution_stream_operation *_esop[3];
    struct e5rt_io_port *_networkPorts[3][11];
    struct __IOSurface { } *_boundInputIOSurface;
    struct e5rt_surface_object { } *_inputE5Surface;
    struct e5rt_buffer_object *_ebuffer[4][2];
    struct __CVBuffer *_pixelBufferMatting[2];
    id<MTLTexture> _textureMatting[2];
    struct e5rt_surface_object *_e5SurfaceMatting[2];
    VisionCoreVideoSegmentationE5NetworkDescriptor *_viSegHQDescriptor;
    PTMetalContext *_metalContext;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    int _frameCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })segmentationSizeForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (unsigned int)reset;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })colorSize;
- (struct __CVBuffer { } *)outputPixelBuffer;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned int)clearIOSurface:(struct __IOSurface { } *)a0 value:(float)a1;
- (BOOL)createEspressoBuffer:(struct e5rt_buffer_object **)a0 fromNetwork:(int)a1 name:(id)a2 isInput:(BOOL)a3;
- (id)debugTextures;
- (void)postProcessUpdateFrame;
- (id)runPersonSegmentationForPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })segmentationSize;

@end
