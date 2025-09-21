@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_homeScreenPath;
    NSString *_ambientPath;
    NSString *_carPlayPath;
}

+ (id)sharedInstance;
+ (id)_widgetIdentifiersNotAllowed;
+ (BOOL)shouldFilterOutChronoWidgetDescriptorDueToDenyList:(id)a0 fromExcludedWidgetsWithIdentifiers:(id)a1;
+ (BOOL)isCHSWidgetDescriptorAllowedForAmbientOnboardingStacks:(id)a0;
+ (id)_widgetStackByFilteringDescriptorsInWidgetStack:(id)a0 variant:(unsigned long long)a1;
+ (BOOL)isDescriptorSpecial:(id)a0;
+ (BOOL)isDescriptorWithWidgetKindSpecial:(id)a0;
+ (BOOL)shouldFilterOutWidgetDescriptorDueToDenyList:(id)a0 fromExcludedWidgetsWithIdentifiers:(id)a1;
+ (BOOL)shouldFilterOutWidgetDescriptorWithBundleIdDueToAppProtection:(id)a0 fromDisabledApps:(id)a1;
+ (id)_onboardingStacksByFilteringDescriptorsInOnboardingStacks:(id)a0 variant:(unsigned long long)a1;
+ (BOOL)isCHSWidgetDescriptorAllowedForCarPlay:(id)a0 disabledApps:(id)a1 excludedWidgetsWithIdentifiers:(id)a2;
+ (BOOL)shouldFilterOutWidgetDescriptorDueToAppProtection:(id)a0 fromDisabledApps:(id)a1;
+ (id)_descriptorsByFilteringDescriptors:(id)a0 variant:(unsigned long long)a1 fromAppsDisabledOnHomeScreen:(id)a2 fromExcludedWidgetsWithIdentifiers:(id)a3 personaIdentifier:(id)a4;

- (id)_generateOnboardingStacksForVariant:(unsigned long long)a0;
- (void)_writeUpdate:(id)a0 atPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchGalleryItemsForVariant:(unsigned long long)a0 gridSize:(unsigned long long)a1 supportedFamilies:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)writeAmbientUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchWidgetDiscoverabilityStacks;
- (id)initWithHomeScreenPath:(id)a0 ambientPath:(id)a1 carPlayPath:(id)a2;
- (void)fetchWidgetGalleryItemsWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeCarPlayUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (id)_JSONCompatible:(id)a0;
- (id)init;
- (void)fetchWidgetSmartStackWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_logFetchedOnboardingStack:(id)a0;
- (void)_fetchSmartStackOfVariant:(unsigned long long)a0 localObserver:(int)a1 completionHandler:(id /* block */)a2;
- (void)writeHomeScreenUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (id)_generateSmartStackForCarPlayWithDescriptorCacheFromRequest:(id)a0 error:(id *)a1;
- (void)_readUpdateFromFileAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)_readHomeScreenUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (void)fetchGalleryItemsForVariant:(unsigned long long)a0 gridSize:(unsigned long long)a1 supportedFamilies:(unsigned long long)a2 personaIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (id)_generateSmartStacksForCarPlayWithRequest:(id)a0 error:(id *)a1;
- (void)fetchDefaultStacksJSONWithCompletionHandler:(id /* block */)a0;
- (id)fetchWidgetDiscoverabilityStacksForVariant:(unsigned long long)a0;
- (void)_readCarPlayUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (void)_readAmbientUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (void)fetchSuggestedGalleryItemsOfGridSize:(unsigned long long)a0 widgetFamilyMask:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)galleryItemsForCarPlayWithRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
