@class NSError;

@interface GMAvailabilityWrapper : NSObject

+ (long long)currentWithUseCaseIdentifiers:(id)a0;
+ (BOOL)shouldBeShownInSettingsReturningAvailabilityStatus:(long long *)a0;
+ (void)getShouldNotDownloadOrServeAppleIntelligenceAssetsWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (BOOL)isOkayToHaveAsset;
+ (BOOL)shouldBeShownInSetupAssistantReturningAvailabilityStatus:(long long *)a0;
+ (void)updateAvailabilityWithCompletion:(void (^)(NSError *))a0;

- (id)init;

@end
