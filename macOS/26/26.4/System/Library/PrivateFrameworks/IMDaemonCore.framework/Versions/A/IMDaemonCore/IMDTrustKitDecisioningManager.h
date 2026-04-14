@class NSString, NSArray, NSDictionary, NSAttributedString;

@interface IMDTrustKitDecisioningManager : NSObject <IMDTrustKitDecisioningManaging> {
    void /* unknown type, empty encoding */ trustKit;
    void /* unknown type, empty encoding */ syncedSettingsManager;
    void /* unknown type, empty encoding */ spamFilterHelper;
    void /* unknown type, empty encoding */ spamReInferenceNotificationToken;
}

@property (class, nonatomic, readonly) IMDTrustKitDecisioningManager *sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSyncedSettingsManager:(id)a0 spamFilterHelper:(id)a1;
- (BOOL)isJunkFilteringEnabled;
- (void)requestDecisionForSender:(NSString *)a0 service:(NSString *)a1 fileURLs:(NSArray *)a2 trustIndicator:(NSString *)a3 messageBody:(NSAttributedString *)a4 countryCode:(NSString *)a5 requestReason:(long long)a6 containsOneTimeCode:(BOOL)a7 spamDetectionSource:(long long)a8 decisionInfo:(NSDictionary *)a9 completionHandler:(void (^)(long long, NSDictionary *))a10;
- (BOOL)shouldSkipTrustKitDecisioningForChat:(id)a0 sender:(id)a1;

@end
