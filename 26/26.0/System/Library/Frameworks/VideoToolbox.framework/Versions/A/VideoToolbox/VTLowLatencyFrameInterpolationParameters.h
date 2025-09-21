@class NSArray, VTFrameProcessorFrame, NSString, NSObject;
@protocol OS_dispatch_group;

@interface VTLowLatencyFrameInterpolationParameters : NSObject <VTFrameProcessorParameters> {
    NSObject<OS_dispatch_group> *_parameterDispatchGroup;
}

@property (readonly, nonatomic) VTFrameProcessorFrame *sourceFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *previousFrame;
@property (readonly, nonatomic) NSArray *interpolationPhase;
@property (readonly, nonatomic) NSArray *destinationFrames;
@property (readonly, nonatomic) VTFrameProcessorFrame *destinationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceFrame:(id)a0 previousFrame:(id)a1 interpolationPhase:(id)a2 destinationFrames:(id)a3;
- (id)parameterDispatchGroup;

@end
