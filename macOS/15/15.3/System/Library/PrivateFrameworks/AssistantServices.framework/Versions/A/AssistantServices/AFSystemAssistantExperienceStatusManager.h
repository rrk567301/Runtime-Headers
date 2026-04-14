@interface AFSystemAssistantExperienceStatusManager : NSObject

@property BOOL saeEnabled;

+ (id)sharedManager;
+ (BOOL)isSAEEnabled;

- (void)fetchGenerativeModelsAvailability;

@end
