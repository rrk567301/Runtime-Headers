@interface IMRequirementLogger : NSObject

@property unsigned char loggingLevel;
@property const char *categoryOverride;
@property char throwFailures;

+ (id)sharedInstance;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (struct IMRequirementFailed_t { char *x0; char x1; char x2; unsigned char x3; })requirementDidFail:(const char *)a0;
- (void)updateSettingsFromUserDefaults;

@end
