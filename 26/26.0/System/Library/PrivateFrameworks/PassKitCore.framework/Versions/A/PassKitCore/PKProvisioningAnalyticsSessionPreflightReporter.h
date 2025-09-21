@class NSMutableArray;

@interface PKProvisioningAnalyticsSessionPreflightReporter : PKProvisioningAnalyticsSessionReporter {
    BOOL _isUnaffiliated;
    NSMutableArray *_pendingEventsToReport;
}

+ (id)createUnaffiliatedReporter;

- (void).cxx_destruct;
- (void)_reportPreflightStepCompleteForContext:(id)a0 token:(id)a1;
- (void)_sendPendingEvents;
- (void)affiliateReporter:(id)a0;
- (void)finishPreflightForToken:(id)a0;
- (void)reportAppExtensionPreflightComplete:(id)a0 token:(id)a1;
- (void)reportCredentialsPreflightComplete:(id)a0 token:(id)a1;
- (void)reportPreflightStepComplete:(id)a0 itemCount:(unsigned long long)a1 token:(id)a2;
- (void)reportPreflightStepComplete:(id)a0 token:(id)a1;
- (id)startPreflight;

@end
