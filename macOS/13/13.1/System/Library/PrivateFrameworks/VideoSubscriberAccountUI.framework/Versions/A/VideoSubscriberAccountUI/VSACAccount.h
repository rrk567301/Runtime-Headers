@interface VSACAccount : NSObject

@property (nonatomic) unsigned long long overridingPasswordOption;

+ (id)sharedInstance;

- (id)username;
- (BOOL)hasAccount;
- (id)initWithManualPasswordOption:(unsigned long long)a0;
- (unsigned long long)freeAppPasswordPromptSetting;
- (unsigned long long)convertedAMSAccountPasswordPromptSetting;

@end
