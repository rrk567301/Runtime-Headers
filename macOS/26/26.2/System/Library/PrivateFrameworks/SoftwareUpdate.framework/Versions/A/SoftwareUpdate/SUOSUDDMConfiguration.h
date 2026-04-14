@class SUCorePolicyDDMConfiguration;

@interface SUOSUDDMConfiguration : NSObject

@property (retain) SUCorePolicyDDMConfiguration *ddmConfiguration;
@property int notifyToken;

+ (id)sharedInstance;
+ (void)postConfigurationChangedNotification;

- (id)init;
- (void)dealloc;
- (void)reloadConfiguration;

@end
