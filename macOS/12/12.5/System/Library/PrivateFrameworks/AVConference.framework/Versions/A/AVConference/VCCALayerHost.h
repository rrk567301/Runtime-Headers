@class AVCRemoteVideoClient;

@interface VCCALayerHost : CALayerHost {
    AVCRemoteVideoClient *_remoteVideoClient;
}

- (void)dealloc;
- (void)layoutSublayers;
- (id)initWithRemoteVideoClient:(id)a0;

@end
