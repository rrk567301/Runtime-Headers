@class BWNodeOutput;

@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode

@property (readonly, nonatomic) BWNodeOutput *primaryFrameOutput;
@property (readonly, nonatomic) BWNodeOutput *synchronizedSlaveFrameOutput;

+ (void)initialize;

- (id)initWithBackPressureExtraRetainBufferCount:(int)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;

@end
