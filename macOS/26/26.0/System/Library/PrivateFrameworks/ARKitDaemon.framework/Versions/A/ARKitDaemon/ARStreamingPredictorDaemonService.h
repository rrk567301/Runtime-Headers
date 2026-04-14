@class NSString, NSObject;
@protocol ARStreamingPredictorRemoteServiceProtocol, OS_channel_rt;

@interface ARStreamingPredictorDaemonService : ARDaemonService <ARStreamingPredictorDaemonServiceProtocol, ARNetworkingDevicePoseObserver, ARTimebaseCorrectionObserver> {
    NSObject<OS_channel_rt> *_pose_channel;
    NSObject<OS_channel_rt> *_timebase_channel;
    _Atomic double _last_timebase_correction;
}

@property (readonly, nonatomic) id<ARStreamingPredictorRemoteServiceProtocol> client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)networkingServiceName;
+ (Class)remoteServiceClass;

- (id)initWithConnection:(id)a0;
- (void)_commonInit;
- (void).cxx_destruct;
- (void)_setupTimebaseCorrectionChannel;
- (void)configureWithNetworkingService:(id)a0;
- (void)_setupPoseChannel;
- (id)initWithRemoteService:(id)a0;
- (void)onReceiveDevicePose:(struct ARNetworkingDevicePoseV1 { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; double x2; unsigned long long x3; int x4; double x5; double x6; struct { void /* unknown type, empty encoding */ x0[4]; } x7; BOOL x8; } *)a0;
- (void)setTimebaseCorrection:(double)a0;

@end
