@class NSString, NSDictionary, NSAttributedString;

@interface IMDTrustKitDecisioningManager : NSObject <IMDTrustKitDecisioningManaging> {
    void /* unknown type, empty encoding */ trustKit;
    void /* unknown type, empty encoding */ syncedSettingsManager;
    void /* unknown type, empty encoding */ spamFilterHelper;
}

@property (class, nonatomic, readonly) IMDTrustKitDecisioningManager *sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSyncedSettingsManager:(id)a0 spamFilterHelper:(id)a1;
- (BOOL)isJunkFilteringEnabled;
- (void)requestDecisionForSender:(NSString *)a0 service:(NSString *)a1 trustIndicator:(NSString *)a2 messageBody:(NSAttributedString *)a3 countryCode:(NSString *)a4 requestReason:(long long)a5 containsOneTimeCode:(BOOL)a6 completionHandler:(void (^)(long long, NSDictionary *))a7;
- (BOOL)shouldSkipTrustKitDecisioningForChat:(id)a0 sender:(id)a1;

@end
