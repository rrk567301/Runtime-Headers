@class SUCorePolicyDDMConfiguration;

@interface SUOSUDDMConfiguration : NSObject

@property (retain) SUCorePolicyDDMConfiguration *ddmConfiguration;
@property int notifyToken;

+ (id)sharedInstance;
+ (void)postConfigurationChangedNotification;

- (void)dealloc;
- (id)init;
- (void)reloadConfiguration;

@end
