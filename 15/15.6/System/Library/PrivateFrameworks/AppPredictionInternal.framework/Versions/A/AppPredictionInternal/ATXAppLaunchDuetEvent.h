@class NSString;

@interface ATXAppLaunchDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) long long appLaunchState;
@property (readonly, nonatomic) NSString *launchReason;

+ (char)_acceptableLaunchReason:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithBundleId:(id)a0 appLaunchState:(long long)a1 launchReason:(id)a2 startDate:(id)a3 endDate:(id)a4;
- (id)initWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithCurrentContextStoreValues;

@end
