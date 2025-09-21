@class AVCaptureSession, NSString, pixelBuffer, AVCaptureDevice;
@protocol MTLTexture;

@interface VFXCaptureDeviceSource : VFXTextureSource <AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    struct { pixelBuffer *videoOutput; struct __CVBuffer *x0; id<MTLTexture> mtlTextureForRenderer; id<MTLTexture> mtlTextureColorMatched; id<MTLTexture> mtlTextureColorForColorMatchingComputeKernel; struct CGColorSpace *pixelBufferColorSpace; } _data;
    struct __CVMetalTextureCache { } *_textureCache;
    BOOL _videoMirrored;
    unsigned long long _width;
    unsigned long long _height;
}

@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
