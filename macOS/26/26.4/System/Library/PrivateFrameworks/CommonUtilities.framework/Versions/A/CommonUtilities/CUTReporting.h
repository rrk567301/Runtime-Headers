@class CUTPromise;

@interface CUTReporting : NSObject

@property (retain, nonatomic) CUTPromise *promise;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } promiseLock;

+ (id)_rtcReportingSession;
+ (void)startRTCReportingSessionForService:(id)a0 correlationID:(id)a1 completion:(id /* block */)a2;
+ (id)RTCSessionPromiseWithBatchingInterval:(double)a0;
+ (id)_rtcReportingSessionForService:(id)a0 correlationID:(id)a1;
+ (id)reportingSession;
+ (void)startRTCReportingSessionWithCompletion:(id /* block */)a0;

- (void)_failSeal:(id)a0 withError:(id)a1;
- (id)_RTCSessionPromiseWithBatchingInterval:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_fullfillSeal:(id)a0 withSession:(id)a1;
- (void)_startConfigurationOfSession:(id)a0 withPromiseSeal:(id)a1;
- (void)_beginPromiseTimeoutWithInterval:(long long)a0;

@end
