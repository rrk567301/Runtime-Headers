@class NSString, NSObject;
@protocol ARStreamingPredictorDaemonServiceProtocol, OS_channel_rt;

@interface ARStreamingPredictorRemoteService : ARRemoteService <ARStreamingPredictorRemoteServiceProtocol> {
    struct ARRTNearestNeighborPredictor { NSObject<OS_channel_rt> *pose_channel; NSObject<OS_channel_rt> *timebase_channel; struct ARNetworkingDevicePoseV1 *poses; struct ARRTRingBuffer { int size; int last_written_index; int current_size; } ring_buffer; double latest_timebase_correction; double max_time_delta; } _predictor;
}

@property (readonly, nonatomic) id<ARStreamingPredictorDaemonServiceProtocol> service;
@property (readonly) id<ARStreamingPredictorDaemonServiceProtocol> syncService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)daemonServiceInterface;
+ (id)remoteServiceInterface;

- (void)dealloc;
- (void)_commonInit;
- (void).cxx_destruct;
- (void)asyncServiceWithCallback:(id /* block */)a0;
- (void)createPoseChannelWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)createTimebaseCorrectionChannelWithRequest:(id)a0 completion:(id /* block */)a1;
- (struct ARRTNearestNeighborPredictor { id x0; id x1; struct ARNetworkingDevicePoseV1 *x2; struct ARRTRingBuffer { int x0; int x1; int x2; } x3; double x4; double x5; } *)getPredictor;
- (void)syncServiceWithTimeout:(unsigned long long)a0 callback:(id /* block */)a1;

@end
