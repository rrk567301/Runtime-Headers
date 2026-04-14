@class NSArray, VTFrameProcessorFrame, NSString, VESuperResolutionParameters, VTFrameProcessorOpticalFlow;

@interface VTSuperResolutionScalerParameters : NSObject <VTFrameProcessorParameters> {
    VESuperResolutionParameters *_veParameters;
}

@property (readonly, nonatomic) VTFrameProcessorFrame *sourceFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *previousFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *previousOutputFrame;
@property (readonly, nonatomic) VTFrameProcessorOpticalFlow *opticalFlow;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly, nonatomic) VTFrameProcessorFrame *destinationFrame;
@property (readonly, nonatomic) NSArray *destinationFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceFrame:(id)a0 previousFrame:(id)a1 previousOutputFrame:(id)a2 opticalFlow:(id)a3 submissionMode:(long long)a4 destinationFrame:(id)a5;
- (id)veParameters;

@end
