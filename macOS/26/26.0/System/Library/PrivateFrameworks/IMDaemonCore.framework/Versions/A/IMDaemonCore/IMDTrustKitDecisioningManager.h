@class NSString, NSDictionary, NSAttributedString;

@interface IMDTrustKitDecisioningManager : NSObject {
    void /* unknown type, empty encoding */ trustKit;
    void /* unknown type, empty encoding */ junkFilteringSettingObserver;
}

@property (class, nonatomic, readonly) IMDTrustKitDecisioningManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isJunkFilteringEnabled;
- (void)requestDecisionForSender:(NSString *)a0 service:(NSString *)a1 trustIndicator:(NSString *)a2 messageBody:(NSAttributedString *)a3 countryCode:(NSString *)a4 requestReason:(long long)a5 containsOneTimeCode:(BOOL)a6 completionHandler:(void (^)(long long, NSDictionary *))a7;

@end
