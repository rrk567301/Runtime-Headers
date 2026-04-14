@interface ManagedSettingsObserver : NSObject

@property (readonly, nonatomic) BOOL isSharingPolicyActive;

+ (id)sharedInstance;

- (void)start;

@end
