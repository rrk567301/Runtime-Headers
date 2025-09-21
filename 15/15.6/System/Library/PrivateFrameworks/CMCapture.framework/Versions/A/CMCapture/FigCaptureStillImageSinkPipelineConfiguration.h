@class NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration <NSSecureCoding> {
    int _clientPID;
    NSDictionary *_stillImageColorInfoForFramesOriginatingFromVideoStream;
    char _stillImageISPChromaNoiseReductionEnabled;
    char _stereoFusionSupported;
    char _isIrisSupported;
    char _hdrSupported;
    char _gnrHDRSupported;
}

@property (class, readonly) char supportsSecureCoding;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
