@class DVPFrame, NSString, DVPFrameOpticalFlow;

@interface DVPLensFlareMitigationParameters : NSObject <DVPParameters>

@property (readonly, nonatomic) DVPFrame *sourceFrame;
@property (readonly, nonatomic) DVPFrame *nextFrame;
@property (readonly, nonatomic) DVPFrameOpticalFlow *opticalFlow;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } sourceFrameOpticalCenter;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } nextFrameOpticalCenter;
@property (readonly, nonatomic) double opticalCenterShift;
@property (readonly, nonatomic) DVPFrame *previousOutputFrame;
@property (readonly, nonatomic) DVPFrame *previousPreviousOutputFrame;
@property (readonly, nonatomic) DVPFrame *destinationFrame;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getMotionShiftFromOpticalCenters:(struct CGPoint { double x0; double x1; } *)a0 opticalCenterArrayLen:(unsigned long long)a1 opticalCenterMotionShifts:(double *)a2;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 opticalFlow:(id)a2 sourceFrameOpticalCenter:(struct CGPoint { double x0; double x1; })a3 nextFrameOpticalCenter:(struct CGPoint { double x0; double x1; })a4 opticalCenterShift:(double)a5 previousOutputFrame:(id)a6 previousPreviousOutputFrame:(id)a7 submissionMode:(long long)a8 destinationFrame:(id)a9;

@end
