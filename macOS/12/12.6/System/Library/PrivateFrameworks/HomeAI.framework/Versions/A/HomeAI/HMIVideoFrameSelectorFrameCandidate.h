@class NSArray;

@interface HMIVideoFrameSelectorFrameCandidate : HMFObject

@property (readonly) struct opaqueCMSampleBuffer { } *sbuf;
@property (readonly) float score;
@property (readonly) NSArray *motionDetections;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 score:(float)a1 motionDetections:(id)a2;

@end
