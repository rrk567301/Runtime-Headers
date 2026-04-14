@interface AFSystemAssistantExperienceStatusManager : NSObject

+ (id)sharedInstance;
+ (BOOL)isSAEEnabled;

- (void)_fetchGenerativeModelsAvailability;

@end
