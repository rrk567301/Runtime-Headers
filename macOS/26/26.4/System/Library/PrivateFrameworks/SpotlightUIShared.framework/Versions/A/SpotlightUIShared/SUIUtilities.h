@class NSArray, NSBundle;

@interface SUIUtilities : NSObject

@property (class, readonly) NSBundle *bundle;
@property (class, retain) NSArray *filtersToSimulateDelete;

+ (BOOL)isAppIntentsSupportEnabled;
+ (BOOL)isSpotlightUICLI;
+ (id)keyboardLanguage;
+ (unsigned long long)deviceAuthenticationStateForView:(id)a0;
+ (BOOL)isSpotlightPlusEnabled;
+ (BOOL)isReduceMotionEnabled;
+ (BOOL)isBrowseButtonAnimationEnabled;
+ (BOOL)isExpansionAnimationEnabled;
+ (BOOL)isInvocationAnimationEnabled;
+ (BOOL)isNewQueryArchitectureEnabled;
+ (BOOL)isWiderFilesBrowseViewEnabled;
+ (void)performDeleteCommand:(id)a0;
+ (void)prewarmVisionForImageDerivedColors;
+ (id)prototypeDefaults;
+ (void)releaseVisionCachedResources;
+ (id)spotlightCacheQueue;
+ (unsigned long long)stateForSearchUIAuthenticationState:(unsigned long long)a0;
+ (id)visionResourcesQueue;

@end
