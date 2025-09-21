@class AWSampleLogger, NSObject;
@protocol OS_dispatch_queue, StreamingOperation;

@interface AWAttentionStreamer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<StreamingOperation> _faceDetectStreamer;
    char _unitTestMode;
    AWSampleLogger *_sampleLogger;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)cancelEventStreamWithMask:(unsigned long long)a0;
- (struct { BOOL x0; BOOL x1; BOOL x2; })getStreamerOptionsWithMask:(unsigned long long)a0;
- (id)initForUnitTest:(char)a0 useAVFoundation:(char)a1;
- (char)isStreamerRunningWithMask:(unsigned long long)a0;
- (void)logStreamComplete:(unsigned long long)a0 identifier:(id)a1 duration:(unsigned long long)a2 ERActivated:(BOOL)a3;
- (void)setDisplayStateWithMask:(unsigned long long)a0 displayState:(char)a1;
- (void)setNotificationHandler:(id /* block */)a0 withMask:(unsigned long long)a1;
- (void)setSmartCoverStateWithMask:(unsigned long long)a0 smartCoverState:(char)a1;
- (id)streamEventsWithMask:(unsigned long long)a0 block:(id /* block */)a1 options:(struct { BOOL x0; BOOL x1; BOOL x2; })a2 operationStartFailedBlock:(id /* block */)a3;

@end
