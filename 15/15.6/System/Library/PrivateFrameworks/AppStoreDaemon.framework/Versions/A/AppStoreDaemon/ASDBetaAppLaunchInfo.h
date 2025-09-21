@class NSString, ASDBetaAppDisplayNames, NSDictionary, NSDate, ASDBetaAppVersion;

@interface ASDBetaAppLaunchInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *artistName;
@property (copy) ASDBetaAppDisplayNames *displayNames;
@property (copy) NSDate *expirationDate;
@property (getter=isFeedbackEnabled) char feedbackEnabled;
@property (copy) NSString *iconURLTemplate;
@property (copy) NSDate *lastWelcomeScreenViewDate;
@property (getter=isLaunchScreenEnabled) char launchScreenEnabled;
@property (copy) NSDictionary *localizedTestNotes;
@property (getter=hasSharedFeedback) char sharedFeedback;
@property (copy) NSString *testerEmail;
@property (copy) ASDBetaAppVersion *version;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
