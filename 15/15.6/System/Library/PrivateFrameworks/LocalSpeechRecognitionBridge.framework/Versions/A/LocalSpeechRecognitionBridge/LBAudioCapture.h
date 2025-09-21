@class NSString, CSAudioStream, CSXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface LBAudioCapture : NSObject <CSXPCClientDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)CSXPCClient:(id)a0 didDisconnect:(char)a1;
- (void)_startRequestWithAudioContext:(id)a0 streamOption:(id)a1 streamProvider:(id)a2 completion:(id /* block */)a3;
- (id)_stopStreamOptionWithReason:(unsigned long long)a0 forRequestId:(id)a1;
- (void)startAudioCaptureWithRecordContext:(id)a0 startHostTime:(unsigned long long)a1 siriSessionUUID:(id)a2 completion:(id /* block */)a3;
- (void)stopAudioCaptureWithReason:(unsigned long long)a0 requestId:(id)a1 completion:(id /* block */)a2;

@end
