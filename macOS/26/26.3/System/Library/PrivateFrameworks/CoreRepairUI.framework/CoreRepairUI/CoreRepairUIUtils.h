@interface CoreRepairUIUtils : NSObject

- (BOOL)hasConnectivity;
- (BOOL)getRepairTicket;
- (void)_preflight:(id)a0;
- (BOOL)isPreFlightDone;
- (void)clearCAARequestHistory;
- (void)clearFollowUpForkey:(id)a0;
- (void)getCAAForRepairHistory;
- (long long)getCpuUptimeInSec;
- (BOOL)isBatteryInServiceState;
- (BOOL)isPreflightSuccessful;
- (BOOL)isVaildCAA:(id)a0;
- (BOOL)isbatteryLevelBelowThreshold;
- (void)performBackGroundMiniPreflight;
- (void)performInteractiveMiniPreflightWith:(id /* block */)a0;
- (void)requestCAA;
- (void)retryCAA;
- (void)scheduleNetworkActivityWith:(long long)a0;
- (void)setBootIntentAndReboot;
- (void)setupCAARetry:(id *)a0;

@end
