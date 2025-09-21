@class NSDictionary, CIImage;

@interface AVCaptureMultiCamClientCompositingData : NSObject {
    CIImage *_primaryImage;
    CIImage *_primaryGainMapImage;
    CIImage *_secondaryImage;
    CIImage *_secondaryGainMapImage;
}

@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *primarySampleBuffer;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *primaryGainMapSampleBuffer;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *secondarySampleBuffer;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *secondaryGainMapSampleBuffer;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *outputSampleBuffer;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *outputGainMapSampleBuffer;
@property (retain, nonatomic) NSDictionary *compositingMetadata;

- (void)dealloc;
- (id)primaryImage;
- (id)secondaryImage;
- (id)_imageForGainMapSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_imageForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 gainMapMetadata:(id)a1;
- (id)_initWithPrimarySampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 primaryGainMapSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 secondarySampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 secondaryGainMapSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3 outputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a4 outputGainMapSampleBuffer:(struct opaqueCMSampleBuffer { } *)a5;
- (id)primaryGainMapImage;
- (id)secondaryGainMapImage;

@end
