@class NSString, NSObject;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate> {
    int _clientPid;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    id _sendDelegate;
    id _mediaStreamDelegate;
    NSObject<OS_dispatch_queue> *_mediaStreamDelegateQueue;
}

@property (nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
@property (nonatomic) struct tagVCMediaStreamDelegateRealtimeInstanceVTable { void /* function */ *updateFrequencyLevel; } mediaStreamDelegateFunctions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pause;
- (id)start;
- (void)dealloc;
- (id)stop;
- (id)resume;
- (id)stopWithError:(id)a0;
- (id)setPause:(BOOL)a0;
- (void)didReceiveText:(id)a0;
- (id)initWithSendDelegate:(id)a0 clientPid:(int)a1 delegate:(id)a2 delegateFunctions:(const struct tagVCMediaStreamDelegateRealtimeInstanceVTable { void /* function */ *x0; } *)a3 delegateQueue:(id)a4;
- (void)sendCharacter:(unsigned short)a0;
- (id)sendDelegate;
- (void)sendText:(id)a0;
- (BOOL)setStreamConfig:(id)a0 withError:(id *)a1;

@end
