@interface ImmersiveMediaSupport.AVCVideoClient : NSObject <AVCRemoteVideoClientDelegate, AVCVideoStreamDelegate> {
    void /* unknown type, empty encoding */ _videoStream;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _error;
    void /* unknown type, empty encoding */ _remoteVideoClient;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)dealloc;
- (id)init;
- (void)streamDidStop:(id)a0;
- (void).cxx_destruct;
- (void)stream:(id)a0 didPause:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didResume:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidRecoverFromRTCPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)remoteVideoClient:(id)a0 networkQualityDidDegrade:(BOOL)a1 info:(id)a2;
- (void)remoteVideoClient:(id)a0 remoteMediaDidStall:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 remoteScreenAttributesDidChange:(id)a1;
- (void)remoteVideoClient:(id)a0 remoteVideoAttributesDidChange:(id)a1;
- (void)remoteVideoClient:(id)a0 remoteVideoDidPause:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 videoDidSuspend:(BOOL)a1;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)a0;
- (void)remoteVideoClientDidReceiveLastFrame:(id)a0;
- (void)remoteVideoServerDidDie:(id)a0;
- (void)stream:(id)a0 didUpdateVideoConfiguration:(BOOL)a1 error:(id)a2;

@end
