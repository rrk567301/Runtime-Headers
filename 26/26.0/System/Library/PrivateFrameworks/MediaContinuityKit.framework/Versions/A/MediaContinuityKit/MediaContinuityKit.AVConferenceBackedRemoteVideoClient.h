@interface MediaContinuityKit.AVConferenceBackedRemoteVideoClient : NSObject <AVCRemoteVideoClientDelegate> {
    void /* unknown type, empty encoding */ remoteVideoClient;
    void /* unknown type, empty encoding */ isValid;
    void /* unknown type, empty encoding */ eventStream;
    void /* unknown type, empty encoding */ eventStreamContinuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)remoteVideoClient:(id)a0 remoteScreenAttributesDidChange:(id)a1;
- (void)remoteVideoClient:(id)a0 remoteVideoAttributesDidChange:(id)a1;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)a0;
- (void)remoteVideoClientDidReceiveLastFrame:(id)a0;
- (void)remoteVideoServerDidDie:(id)a0;

@end
