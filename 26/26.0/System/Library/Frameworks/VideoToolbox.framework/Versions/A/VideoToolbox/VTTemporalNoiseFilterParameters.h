@class NSArray, VTFrameProcessorFrame, NSString;

@interface VTTemporalNoiseFilterParameters : NSObject <VTFrameProcessorParameters>

@property (readonly, nonatomic) VTFrameProcessorFrame *sourceFrame;
@property (readonly, nonatomic) NSArray *nextFrames;
@property (readonly, nonatomic) NSArray *previousFrames;
@property (nonatomic) float filterStrength;
@property (nonatomic) BOOL hasDiscontinuity;
@property (readonly, nonatomic) VTFrameProcessorFrame *destinationFrame;
@property (readonly, nonatomic) NSArray *destinationFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceFrame:(id)a0 nextFrames:(id)a1 previousFrames:(id)a2 destinationFrame:(id)a3 filterStrength:(float)a4 hasDiscontinuity:(unsigned char)a5;

@end
