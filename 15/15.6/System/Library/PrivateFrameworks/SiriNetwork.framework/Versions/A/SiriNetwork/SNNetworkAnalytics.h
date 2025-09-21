@class SNNetworkAnalyticsInternal;

@interface SNNetworkAnalytics : NSObject

@property (retain, nonatomic) SNNetworkAnalyticsInternal *underlyingNetworkAnalytics;

+ (id)sessionConnectionFailedError:(id)a0 connectionMode:(id)a1 sessionType:(id)a2 sessionState:(id)a3 dormant:(char)a4 connectionAnalysisInfo:(id)a5;
+ (id)sharedSNNetworkAnalytics;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)reset;
- (void)setNetId:(id)a0;
- (unsigned int)getSequenceNumber;
- (void)increaseSequenceNumber;
- (char)isNetIdAvailable;
- (void)logDebugNetworkConnectionStatePreparationSnapshotCaptured:(id)a0;
- (void)logDebugNetworkConnectionStateReadySnapshotCaptured:(id)a0;
- (void)logDebugSessionConnectionSnapshotCaptured:(id)a0;
- (void)logNetworkConnectionStatePreparationSnapshotCaptured:(id)a0;
- (void)logNetworkConnectionStateReadySnapshotCaptured:(id)a0;
- (void)logPeerConnectionFailed:(id)a0;
- (void)logRequestLinkBetweenOrchestratorAndNetworkComponent;
- (void)logSessionConnectionFailed:(id)a0;
- (void)logSessionConnectionHttpHeaderCreated:(id)a0;
- (void)logSessionConnectionSnapshotCaptured:(id)a0;
- (void)resetNetId;
- (void)resetSequenceNumber;
- (void)setIsConnectionActive:(char)a0;
- (void)setNetIdAvailable:(char)a0;
- (void)setOrchestratorRequestId:(id)a0;
- (id)getNetId;
- (id)getOrchestratorRequestId;
- (char)isConnectionActive;

@end
