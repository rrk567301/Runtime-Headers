@class NSString, AWAttentionSampler, NSMutableDictionary, AWAttentionStreamer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;

@interface AWScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
    NSMutableDictionary *_streamingClients;
    NSMutableDictionary *_interruptedStreamingClients;
    AWAttentionStreamer *_attentionStreamer;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase;
    BOOL _useAVFoundation;
}

@property (weak, nonatomic) id<AWSchedulerObserver> observer;
@property (readonly, nonatomic) AWAttentionSampler *attentionSampler;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL allowFaceDetect;
@property (readonly, nonatomic) BOOL allowHIDEvents;
@property (readonly, nonatomic) BOOL allowMotionDetect;
@property (readonly, nonatomic) BOOL unitTestMode;
@property (readonly, nonatomic) BOOL isDeviceStationary;
@property (readonly, nonatomic) BOOL isDeviceOnLockScreen;

+ (id)sharedUnitTestScheduler;
+ (id)sharedMotionDetectScheduler;
+ (id)sharedScheduler;

- (void)setSmartCoverClosed:(BOOL)a0;
- (void)addClient:(id)a0;
- (void)removeInvalidClientsWithConnection:(id)a0;
- (void)handleNotification:(unsigned long long)a0;
- (BOOL)isMatchOrEnrollOperationRunning;
- (BOOL)shouldActivateMotionDetectForSampling;
- (BOOL)shouldActivateAttentionDetectForStreaming;
- (id)initWithOptions:(id)a0;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2 senderID:(struct __IOHIDService { } *)a3 displayUUID:(id)a4;
- (id)streamFaceDetectEventsWithOptions:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (id)resetInterruptedStreamingClientWithIdentifier:(id)a0;
- (id)addStreamingClient:(id)a0 withIdentifier:(id)a1;
- (BOOL)canActiveOperationBeEnded;
- (void)screenStateChanging:(BOOL)a0;
- (id)cancelFaceDetectStream:(id)a0 withIdentifier:(id)a1;
- (double)calculateTimeDelta:(unsigned long long)a0 endTime:(unsigned long long)a1 timebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a2;
- (void)motionActivityChanging:(BOOL)a0;
- (id)description;
- (void)setClientAsInterrupted:(id)a0 forKey:(id)a1;
- (void)lockScreenStateChanging:(BOOL)a0;
- (BOOL)shouldActivatePersonDetectionForStreaming;
- (BOOL)shouldActivatePersonDetectionForSampling;
- (BOOL)canRunMotionDetect;
- (void)carPlayStateChanging:(BOOL)a0;
- (BOOL)shouldActivateEyeReliefForStreaming;
- (void)removeStreamingClientwithIdentifier:(id)a0;
- (BOOL)shouldActivateAttentionDetectionForSampling;
- (void)removeInvalidClients;
- (void)armEvents;
- (unsigned long long)nextSamplingTimeForSamplingInterval:(unsigned long long)a0;
- (id)streamFaceDetectEvents;
- (void)reevaluate;
- (void).cxx_destruct;

@end
