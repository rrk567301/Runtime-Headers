@class LoGFilter, NSString, OFNormalization, Upsampler, VSRNet, Warper, VEScaler;
@protocol MTLTexture, MTLDevice;

@interface FRNet : NSObject {
    VSRNet *_srnet;
    OFNormalization *_normalization;
    Warper *_warper;
    Upsampler *_upsampler;
    VEScaler *_scaler;
    LoGFilter *_logFilter;
    struct OpaqueVTPixelTransferSession { } *_vtTransferSession;
    id<MTLDevice> _device;
    NSString *_modelPath;
    unsigned long long _inputWidth;
    unsigned long long _inputHeight;
    unsigned int _inputPixelFormat;
    unsigned int _rgbaPixelFormat;
    unsigned int _outputPixelFormat;
    struct __CFDictionary { } *_attachmentDictOfInput;
    struct __CFDictionary { } *_attachmentRGBDict;
    BOOL _inputIsPortrait;
    BOOL _removeCMAttachment;
    long long _bitDepth;
    BOOL _isYUV;
    BOOL _fullRange;
    BOOL _isYUV422;
    struct __CVPixelBufferPool { } *_highResolutionNormalizedBufferPool;
    struct __CVPixelBufferPool { } *_lowResolutionNormalizedBufferPool;
    struct __CVPixelBufferPool { } *_opticalFlowBufferPool;
    struct __CVBuffer { } *_currentLRYUV;
    struct __CVBuffer { } *_normalizedCurrentLowResLuma;
    id<MTLTexture> _normalizedCurrentLowResLumaTexture;
    struct __CVBuffer { } *_currentLRRGB;
    struct __CVBuffer { } *_normalizedRGB;
    struct __CVBuffer { } *_normalizedPreviousLowResLuma;
    id<MTLTexture> _normalizedPreviousLowResLumaTexture;
    struct __CVBuffer { } *_previousLR;
    struct __CVBuffer { } *_previousLRYUV;
    struct __CVBuffer { } *_previousHighResolutionOutput;
    struct __CVBuffer { } *_previousHRRGB;
    id<MTLTexture> _previousHRRGBTexture;
    struct __CVBuffer { } *_opticalFlow;
    id<MTLTexture> _opticalFlowTexture;
    struct __CVBuffer { } *_errorMask;
    id<MTLTexture> _errorMaskTexture;
    struct __CVBuffer { } *_laplacianMask;
    struct __CVBuffer { } *_bicubicRGB;
    id<MTLTexture> _bicubicRGBTexture;
    struct __CVBuffer { } *_warpedHR;
    id<MTLTexture> _warpedHRTexture;
    struct __CVBuffer { } *_srNetHROutput;
}

@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) unsigned long long scaleFactor;
@property (readonly, nonatomic) unsigned long long lowResPaddedWidth;
@property (readonly, nonatomic) unsigned long long lowResPaddedHeight;
@property (readonly, nonatomic) unsigned long long highResPaddedWidth;
@property (readonly, nonatomic) unsigned long long highResPaddedHeight;
@property (readonly, nonatomic) unsigned long long outputWidth;
@property (readonly, nonatomic) unsigned long long outputHeight;
@property (nonatomic) float errorMaskThreshold;
@property (nonatomic) BOOL useLaplacianMask;

+ (void)downloadMobileAssetWithCompletionHandler:(id /* block */)a0;
+ (long long)getMobileAssetStatusWithPercentCompleted:(long long *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)VSRGetInputFrameSizeForUsage:(long long)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (long long)allocateTemporalBuffers;
- (void)convertToRGB:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 withRGBFormat:(unsigned int)a2 rotate:(BOOL)a3;
- (struct __CVBuffer { } *)convertToYUV:(struct __CVBuffer { } *)a0 attachment:(struct __CFDictionary { } *)a1;
- (BOOL)getColorConsistentOutputRGBVia:(struct __CVBuffer { } *)a0 bicubicRGB:(struct __CVBuffer { } *)a1 laplacianMask:(struct __CVBuffer { } *)a2 attachment:(struct __CFDictionary { } *)a3 destinationFrame:(struct __CVBuffer { } *)a4;
- (void)getPixelBufferAttributes:(unsigned int)a0 bitDepth:(long long *)a1 isYUV:(BOOL *)a2 isFullRange:(BOOL *)a3 isYUV422:(BOOL *)a4;
- (id)initWithUsage:(long long)a0 inputWidth:(unsigned long long)a1 inputHeight:(unsigned long long)a2 scaleFactor:(unsigned long long)a3 useMPS:(BOOL)a4 outputSize:(struct CGSize { double x0; double x1; })a5;
- (void)releaseTemporalBuffers;
- (BOOL)upscaleFrame:(struct __CVBuffer { } *)a0 previousLowResFrame:(struct __CVBuffer { } *)a1 previousHiResFrame:(struct __CVBuffer { } *)a2 opticalFlow:(struct __CVBuffer { } *)a3 destinationHiResFrame:(struct __CVBuffer { } *)a4;

@end
