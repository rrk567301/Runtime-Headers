@class HKSPAnalyticsStore;

@interface HKSPAnalyticsManager : NSObject

@property (retain, nonatomic) HKSPAnalyticsStore *analyticsStore;
@property (copy, nonatomic) id /* block */ ihaOptInStatusProvider;
@property (copy, nonatomic) id /* block */ diagnosticsOptInStatusProvider;
@property (copy, nonatomic) id /* block */ analyticsEventConsumer;

+ (id)currentDeviceType;
+ (id)activePairedWatchProductType;
+ (char)defaultIsDiagnosticDataSubmissionAllowed;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (void)trackEvent:(id)a0;
- (id)initWithUserDefaults:(id)a0 ihaOptInStatusProvider:(id /* block */)a1 diagnosticsOptInStatusProvider:(id /* block */)a2 analyticsEventConsumer:(id /* block */)a3;
- (char)isDiagnosticDataSubmissionAllowed;
- (char)isImproveHealthAndActivitySubmissionAllowed;
- (void)trackEvents:(id)a0;

@end
