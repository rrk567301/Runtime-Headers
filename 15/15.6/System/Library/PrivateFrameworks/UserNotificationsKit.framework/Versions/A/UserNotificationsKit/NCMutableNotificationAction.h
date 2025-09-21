@class NSString, NSURL, NSDictionary;
@protocol NCNotificationActionRunner;

@interface NCMutableNotificationAction : NCNotificationAction

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *iconImageBundlePath;
@property (nonatomic) unsigned long long activationMode;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *launchBundleID;
@property (nonatomic) unsigned long long behavior;
@property (copy, nonatomic) NSDictionary *behaviorParameters;
@property (retain, nonatomic) id<NCNotificationActionRunner> actionRunner;
@property (nonatomic) char requiresAuthentication;
@property (nonatomic, getter=isDestructiveAction) char destructiveAction;
@property (nonatomic) char shouldDismissNotification;
@property (nonatomic) char isSiriActionCandidate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentifier:(id)a0;
- (void)setTitle:(id)a0;
- (void)setBehavior:(unsigned long long)a0;
- (void)setRequiresAuthentication:(char)a0;
- (void)setLaunchURL:(id)a0;
- (void)setActivationMode:(unsigned long long)a0;
- (char)isSiriAction;
- (void)setIconImageName:(id)a0;
- (void)setActionRunner:(id)a0;
- (void)setBehaviorParameters:(id)a0;
- (void)setDestructiveAction:(char)a0;
- (void)setIconImageBundlePath:(id)a0;
- (void)setIsSiriActionCandidate:(char)a0;
- (void)setLaunchBundleID:(id)a0;
- (void)setShouldDismissNotification:(char)a0;

@end
