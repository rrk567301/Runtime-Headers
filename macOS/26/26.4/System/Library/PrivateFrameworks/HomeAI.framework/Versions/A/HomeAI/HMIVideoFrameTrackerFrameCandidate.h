@class NSArray, NSSet;

@interface HMIVideoFrameTrackerFrameCandidate : HMFObject

@property (readonly) struct opaqueCMSampleBuffer { } *sbuf;
@property (readonly) float score;
@property (readonly) NSArray *motionDetections;
@property (readonly) NSSet *tracks;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 score:(float)a1 motionDetections:(id)a2 tracks:(id)a3;

@end
