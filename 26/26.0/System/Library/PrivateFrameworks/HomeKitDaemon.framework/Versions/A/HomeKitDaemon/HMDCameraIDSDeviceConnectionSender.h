@class HMFOSTransaction, AVCPacketRelay, NSString, NSNumber, HMDDevice;
@protocol HMDCameraIDSDeviceConnectionSenderDelegate;

@interface HMDCameraIDSDeviceConnectionSender : HMDCameraIDSDeviceConnection <AVCPacketRelayDelegate, HMDCameraRemoteStreamSenderProtocol>

@property (readonly) HMDDevice *device;
@property (retain) AVCPacketRelay *videoPacketRelay;
@property (retain) AVCPacketRelay *audioPacketRelay;
@property (retain) HMFOSTransaction *packetRelayTransaction;
@property (weak) id<HMDCameraIDSDeviceConnectionSenderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *mtu;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)packetRelay:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)packetRelay:(id)a0 didStop:(BOOL)a1 error:(id)a2;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_socketOpenedWithError:(id)a0;
- (void)_startAudioPacketRelay:(int)a0 ipAddress:(id)a1 port:(unsigned long long)a2;
- (void)_startVideoPacketRelay:(int)a0 ipAddress:(id)a1 port:(unsigned long long)a2;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 device:(id)a2 delegate:(id)a3;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 device:(id)a2 delegate:(id)a3 idsProxyStreamService:(id)a4;
- (void)openRelaySession;
- (void)startPacketRelayWithIDSDestination:(id)a0 cameraVideoSSRC:(unsigned int)a1 cameraAudioSSRC:(unsigned int)a2;
- (void)startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;

@end
