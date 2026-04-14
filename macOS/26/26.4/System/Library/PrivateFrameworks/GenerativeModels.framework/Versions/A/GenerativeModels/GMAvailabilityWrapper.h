@class NSError, NSString;

@interface GMAvailabilityWrapper : NSObject

+ (BOOL)useCasePartnerAllowedInUserLocaleRegionWithUseCaseIdentifiers:(id)a0 language:(id)a1;
+ (long long)currentWithUseCaseIdentifiers:(id)a0 language:(id)a1;
+ (BOOL)isDeviceEligible;
+ (id)UAFSubscribersWithUseCaseIdentifiers:(id)a0;
+ (id)desiredUseCaseIdentifiersSettings;
+ (BOOL)enabledWithUseCaseIdentifiers:(id)a0 language:(id)a1;
+ (long long)currentWithUseCaseIdentifiers:(id)a0;
+ (BOOL)shouldBeShownInSettingsReturningAvailabilityStatus:(long long *)a0;
+ (BOOL)assetIsNotReadyWithUseCaseIdentifiers:(id)a0 language:(id)a1;
+ (void)getShouldBlockAppleIntelligenceAssetsWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)getShouldNotDownloadOrServeAppleIntelligenceAssetsWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)getWaitlistWithUseCaseIdentifier:(NSString *)a0 completionHandler:(void (^)(long long, NSError *))a1;
+ (BOOL)isOkayToHaveAsset;
+ (BOOL)shouldBeShownInSetupAssistantReturningAvailabilityStatus:(long long *)a0;
+ (void)updateAvailabilityWithCompletion:(void (^)(NSError *))a0;
+ (void)updateOptInStatus:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;
+ (BOOL)wasEverAvailable;

- (id)init;

@end
