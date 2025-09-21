@interface CSHostLauncherDarwin : NSObject

+ (id)sharedInstance;

- (id)init;
- (char)wakeHostForVoiceTrigger;

@end
