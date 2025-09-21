@class NSString, VCCaptionsReceiver;
@protocol VCCaptionsSourceDelegate;

@interface VCCaptionsStream : VCVideoStream <VCCaptionsReceiverDelegate, VCCaptionsSource> {
    VCCaptionsReceiver *_captionsReceiver;
    id<VCCaptionsSourceDelegate> _captionsDelegate;
    char _enabled;
}

@property (readonly, nonatomic) char captionsSupported;
@property (readonly, nonatomic) char captionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)enableCaptions:(char)a0;
- (void)prewarmCaptions;
- (id)captionsDelegate;
- (void)didReceiveCaptions:(id)a0;
- (id)initWithTransportSessionID:(unsigned int)a0 idsParticipantID:(unsigned long long)a1 ssrc:(unsigned int)a2 streamToken:(long long)a3;
- (void)onStartWithCompletionHandler:(id /* block */)a0;
- (void)onStopWithCompletionHandler:(id /* block */)a0;
- (void)registerCaptionsEventDelegate:(id)a0;
- (void)setCaptionsLocale:(id)a0;
- (void)setCaptionsUsage:(id)a0;
- (struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { void /* function */ *x0; void /* function */ *x1; })videoReceiverDelegateFunctions;

@end
