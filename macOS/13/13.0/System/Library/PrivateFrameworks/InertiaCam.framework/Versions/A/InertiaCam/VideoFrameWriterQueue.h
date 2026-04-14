@class NSLock, NSError, NSConditionLock, AVAssetWriter, NSObject, NSMutableArray, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue, VideoFrameWriterProgressRecipient;

@interface VideoFrameWriterQueue : NSObject

@property (retain, nonatomic) AVAssetWriter *videoWriter;
@property (retain, nonatomic) AVAssetWriterInput *writerInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *inputAdaptor;
@property (retain) NSMutableArray *frameArray;
@property (retain, nonatomic) NSLock *frameArrayLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *frameWriteQueue;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (retain) NSConditionLock *writingDoneLock;
@property (retain) NSError *writeError;
@property BOOL writeSuccess;
@property unsigned long long nextFrameIndex;
@property BOOL canceled;
@property BOOL doneQueueing;
@property unsigned int drainMinimum;
@property unsigned int drainMaximum;
@property (retain) NSConditionLock *drainConditionLock;
@property unsigned long long drainTarget;
@property (weak) id<VideoFrameWriterProgressRecipient> frameWriterUpdateCallback;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOutputURL:(id)a0 forMovieDimensions:(struct CGSize { double x0; double x1; })a1 outputTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (void)AddAFrame:(id)a0;
- (unsigned long long)FramesInQueue;
- (BOOL)WaitForFinish;
- (id)FindFrameWithIndex:(long long)a0;
- (void)FrameRequestCallback;
- (void)StartWatchingForFrames;
- (void)DrainIfAbove:(unsigned int)a0 downTo:(unsigned int)a1;

@end
