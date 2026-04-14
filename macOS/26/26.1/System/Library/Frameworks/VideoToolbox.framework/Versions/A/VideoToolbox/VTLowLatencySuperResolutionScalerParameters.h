@class NSArray, VTFrameProcessorFrame, NSString;

@interface VTLowLatencySuperResolutionScalerParameters : NSObject <VTFrameProcessorParameters>

@property (readonly, nonatomic) VTFrameProcessorFrame *sourceFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *destinationFrame;
@property (readonly, nonatomic) NSArray *destinationFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceFrame:(id)a0 destinationFrame:(id)a1;

@end
