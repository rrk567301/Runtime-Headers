@class PXGTungstenRecordingFrameState, NSOutputStream, NSURL, NSObject;
@protocol OS_dispatch_queue, PXGTungstenRecordingSerializer;

@interface PXGTungstenRecordingSession : NSObject

@property (retain, nonatomic) id<PXGTungstenRecordingSerializer> serializer;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue;
@property (readonly, nonatomic) PXGTungstenRecordingFrameState *frameState;
@property (readonly, nonatomic) NSURL *recordingURL;
@property (readonly, nonatomic) BOOL isStopped;
@property (readonly, nonatomic) long long frameNumber;

- (void)dealloc;
- (void)recordEvent:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithSerializer:(id)a0 directoryURL:(id)a1;
- (void)startNextFrame;

@end
