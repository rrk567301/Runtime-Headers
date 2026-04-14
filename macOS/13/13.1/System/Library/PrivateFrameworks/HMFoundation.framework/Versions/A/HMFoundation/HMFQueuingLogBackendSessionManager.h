@class NSOperationQueue, NSPointerArray;
@protocol HMFRTCSessionFactory;

@interface HMFQueuingLogBackendSessionManager : NSObject <_HMFLogBackendSubmitterDelegate, HMFLogBackendSessionManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSPointerArray *_activeSessions;
    double _nextStaleCheckTime;
    BOOL __isTimeValid;
}

@property (readonly, nonatomic) id<HMFRTCSessionFactory> rtcFactory;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) NSOperationQueue *queue;

+ (id)logCategory;
+ (id)sharedSessionManager;

- (void).cxx_destruct;
- (void)submitMessages:(id)a0 serviceName:(id)a1 sessionUUID:(id)a2 isRealtime:(BOOL)a3;
- (id)logBackendSessionWithServiceName:(id)a0 sessionUUID:(id)a1 isRealtime:(BOOL)a2;
- (id)initWithRTCFactory:(id)a0 timeSourceBlock:(id /* block */)a1;
- (BOOL)_isTimeValid;
- (void)sendMetaEventWithName:(id)a0 forServiceName:(id)a1;
- (void)checkForStaleSessions;

@end
