@class NSOperationQueue, NSPointerArray;
@protocol HMMRTCReportingFactory;

@interface HMMQueuingRTCBackendSessionManager : NSObject <_HMMLogBackendSubmitterDelegate, HMMRTCBackendSessionManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSPointerArray *_activeSessions;
    double _nextStaleCheckTime;
    char __isTimeValid;
}

@property (readonly, nonatomic) id<HMMRTCReportingFactory> rtcFactory;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) NSOperationQueue *queue;

+ (id)logCategory;
+ (id)sharedSessionManager;

- (void).cxx_destruct;
- (void)addBarrierBlock:(id /* block */)a0;
- (char)_isTimeValid;
- (void)checkForStaleSessions;
- (id)initWithRTCFactory:(id)a0 timeSourceBlock:(id /* block */)a1;
- (id)logBackendSessionWithServiceName:(id)a0 sessionUUID:(id)a1 isRealtime:(char)a2;
- (void)sendMetaEventWithName:(id)a0 forServiceName:(id)a1;
- (void)submitMessages:(id)a0 serviceName:(id)a1 sessionUUID:(id)a2 isRealtime:(char)a3;

@end
