@protocol MTLCommandQueue;

@interface PTEffect : NSObject {
    PTEffect *_delegate;
    id<MTLCommandQueue> _metalCommandQueue;
    BOOL _asynchronous;
    int _frameId;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    BOOL _prewarmOnly;
}

@property long long effectQuality;

+ (int)prewarmWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(long long)a2;
+ (int)prewarmForMediaserverd;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(long long)a2;
- (int)render:(struct __CVBuffer { } *)a0 detectedObjects:(const struct __CFDictionary { } *)a1 toColorBuffer:(struct __CVBuffer { } *)a2;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(long long)a2 prewarmOnly:(BOOL)a3;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(long long)a2 effectQuality:(long long)a3;

@end
