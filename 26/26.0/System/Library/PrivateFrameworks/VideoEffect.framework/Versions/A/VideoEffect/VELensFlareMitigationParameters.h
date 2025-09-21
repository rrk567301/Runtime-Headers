@class VEFrame, VEFrameOpticalFlow, NSString;

@interface VELensFlareMitigationParameters : NSObject <VEParameters>

@property (readonly, nonatomic) VEFrame *sourceFrame;
@property (readonly, nonatomic) VEFrame *nextFrame;
@property (readonly, nonatomic) VEFrameOpticalFlow *opticalFlow;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } sourceFrameOpticalCenter;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } nextFrameOpticalCenter;
@property (readonly, nonatomic) double opticalCenterShift;
@property (readonly, nonatomic) VEFrame *previousOutputFrame;
@property (readonly, nonatomic) VEFrame *previousPreviousOutputFrame;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly, nonatomic) VEFrame *destinationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getMotionShiftFromOpticalCenters:(struct CGPoint { double x0; double x1; } *)a0 opticalCenterArrayLen:(unsigned long long)a1 opticalCenterMotionShifts:(double *)a2;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 opticalFlow:(id)a2 sourceFrameOpticalCenter:(struct CGPoint { double x0; double x1; })a3 nextFrameOpticalCenter:(struct CGPoint { double x0; double x1; })a4 opticalCenterShift:(double)a5 previousOutputFrame:(id)a6 previousPreviousOutputFrame:(id)a7 submissionMode:(long long)a8 destinationFrame:(id)a9;

@end
