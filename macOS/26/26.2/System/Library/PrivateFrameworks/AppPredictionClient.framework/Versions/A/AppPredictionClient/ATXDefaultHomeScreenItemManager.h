@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_homeScreenPath;
    NSString *_ambientPath;
    NSString *_carPlayPath;
}

+ (id)sharedInstance;
+ (BOOL)shouldFilterOutChronoWidgetDescriptorDueToDenyList:(id)a0 fromExcludedWidgetsWithIdentifiers:(id)a1;
+ (BOOL)isCHSWidgetDescriptorAllowedForAmbientOnboardingStacks:(id)a0;
+ (BOOL)shouldFilterOutWidgetDescriptorDueToDenyList:(id)a0 fromExcludedWidgetsWithIdentifiers:(id)a1;
+ (id)_onboardingStacksByFilteringDescriptorsInOnboardingStacks:(id)a0 variant:(unsigned long long)a1;
+ (id)_widgetIdentifiersNotAllowed;
+ (id)_descriptorsByFilteringDescriptors:(id)a0 disabledApps:(id)a1 excludedWidgetsWithIdentifiers:(id)a2 client:(unsigned long long)a3 personaIdentifier:(id)a4;
+ (BOOL)shouldFilterOutWidgetDescriptorWithBundleIdDueToAppProtection:(id)a0 fromDisabledApps:(id)a1;
+ (id)_widgetStackByFilteringDescriptorsInWidgetStack:(id)a0 variant:(unsigned long long)a1;
+ (BOOL)shouldFilterOutWidgetDescriptorDueToAppProtection:(id)a0 fromDisabledApps:(id)a1;
+ (BOOL)isDescriptorWithWidgetKindSpecial:(id)a0;
+ (id)_descriptorsByFilteringDescriptors:(id)a0 variant:(unsigned long long)a1 fromAppsDisabledOnHomeScreen:(id)a2 fromExcludedWidgetsWithIdentifiers:(id)a3 personaIdentifier:(id)a4;
+ (BOOL)isDescriptorSpecial:(id)a0;

- (id)initWithHomeScreenPath:(id)a0 ambientPath:(id)a1 carPlayPath:(id)a2;
- (id)fetchWidgetDiscoverabilityStacks;
- (void)fetchGalleryItemsForVariant:(unsigned long long)a0 gridSize:(unsigned long long)a1 supportedFamilies:(unsigned long long)a2 personaIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchWidgetGalleryItemsWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeCarPlayUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchSmartStackOfVariant:(unsigned long long)a0 localObserver:(int)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_readAmbientUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (id)_generateOnboardingStacksForVariant:(unsigned long long)a0;
- (void)_writeUpdate:(id)a0 atPath:(id)a1 completionHandler:(id /* block */)a2;
- (id)_generateSmartStackWithDescriptorCacheFromRequest:(id)a0 error:(id *)a1;
- (void)_readCarPlayUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (void)writeAmbientUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedGalleryItemsOfGridSize:(unsigned long long)a0 widgetFamilyMask:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)_readHomeScreenUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (id)_JSONCompatible:(id)a0;
- (void)fetchWidgetSmartStackWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)generateItemsForWidgetGalleryWithRequest:(id)a0 error:(id *)a1;
- (void)fetchDefaultStacksJSONWithCompletionHandler:(id /* block */)a0;
- (void)_readUpdateFromFileAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (id)_generateSmartStacksWithRequest:(id)a0 error:(id *)a1;
- (id)init;
- (id)fetchWidgetDiscoverabilityStacksForVariant:(unsigned long long)a0;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)writeHomeScreenUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchGalleryItemsForVariant:(unsigned long long)a0 gridSize:(unsigned long long)a1 supportedFamilies:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_logFetchedOnboardingStack:(id)a0;

@end
