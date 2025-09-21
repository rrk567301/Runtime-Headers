@class NSError, NSString;

@interface GMAvailabilityWrapper : NSObject

+ (long long)currentWithUseCaseIdentifiers:(id)a0 language:(id)a1;
+ (char)isDeviceEligible;
+ (long long)currentWithUseCaseIdentifiers:(id)a0;
+ (char)shouldBeShownInSettingsReturningAvailabilityStatus:(long long *)a0;
+ (void)getShouldBlockAppleIntelligenceAssetsWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)getShouldNotDownloadOrServeAppleIntelligenceAssetsWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)getWaitlistWithUseCaseIdentifier:(NSString *)a0 completionHandler:(void (^)(long long, NSError *))a1;
+ (char)isOkayToHaveAsset;
+ (char)shouldBeShownInSetupAssistantReturningAvailabilityStatus:(long long *)a0;
+ (void)updateAvailabilityWithCompletion:(void (^)(NSError *))a0;
+ (void)updateOptInStatus:(char)a0 completionHandler:(void (^)(NSError *))a1;
+ (char)wasEverAvailable;

- (id)init;

@end
