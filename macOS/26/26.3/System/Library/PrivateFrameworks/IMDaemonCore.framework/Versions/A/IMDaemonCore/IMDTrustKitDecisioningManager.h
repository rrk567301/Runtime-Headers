@class NSString, NSDictionary, NSAttributedString;

@interface IMDTrustKitDecisioningManager : NSObject <IMDTrustKitDecisioningManaging> {
    void /* unknown type, empty encoding */ trustKit;
    void /* unknown type, empty encoding */ syncedSettingsManager;
    void /* unknown type, empty encoding */ spamFilterHelper;
    void /* unknown type, empty encoding */ spamReInferenceNotificationToken;
}

@property (class, nonatomic, readonly) IMDTrustKitDecisioningManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSyncedSettingsManager:(id)a0 spamFilterHelper:(id)a1;
- (BOOL)isJunkFilteringEnabled;
- (void)requestDecisionForSender:(NSString *)a0 service:(NSString *)a1 trustIndicator:(NSString *)a2 messageBody:(NSAttributedString *)a3 countryCode:(NSString *)a4 requestReason:(long long)a5 containsOneTimeCode:(BOOL)a6 spamDetectionSource:(long long)a7 decisionInfo:(NSDictionary *)a8 completionHandler:(void (^)(long long, NSDictionary *))a9;
- (BOOL)shouldSkipTrustKitDecisioningForChat:(id)a0 sender:(id)a1;

@end
