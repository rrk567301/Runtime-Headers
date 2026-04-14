@interface AXTripleClickHelpers : NSObject

+ (id)_availableFeatures;
+ (id)_allAvailableFeaturesIOS;
+ (id)_allAvailableFeaturesWatchOS;
+ (BOOL)_isAccessibilityAppIntentsProcess;
+ (void)_localToggleTripleClickOption:(int)a0;
+ (BOOL)_localValueForTripleClickOption:(int)a0;
+ (void)_promptToDisableBrightnessFilters:(id /* block */)a0 data:(id)a1;
+ (BOOL)_shouldShowFeatureInShortcutsControlCenterModule:(int)a0 includeGuidedAccess:(BOOL)a1;
+ (void)_toggleAssistiveTouch;
+ (void)_toggleClassicInvertColors;
+ (void)_toggleSmartInvertColorsOffMainThread;
+ (void)_toggleVoiceOver;
+ (id)allTripleClickOptions;
+ (id)allTripleClickOptionsForPlatform:(long long)a0;
+ (BOOL)isReduceWhitePointEnabled;
+ (id)localizationKeyForTripleClickOption:(int)a0;
+ (long long)stateForTripleClickOption:(int)a0;
+ (id)titleForTripleClickOption:(int)a0;
+ (void)toggleColorFilter;
+ (void)toggleFullKeyboardAccess;
+ (void)toggleGuidedAccessFromControlCenter;
+ (void)toggleHearingControlCenter;
+ (void)toggleLiveSpeech;
+ (void)toggleReduceWhitePoint;
+ (void)toggleTripleClickOption:(int)a0;
+ (void)toggleTripleClickOption:(int)a0 fromSource:(long long)a1;
+ (void)toggleZoomOffMainThread;
+ (id)tripleClickOptionDidChangeNotification;
+ (id)tripleClickOptionsForAccessibilityShortcutControlCenterModuleIncludingGuidedAccess:(BOOL)a0;
+ (BOOL)valueForTripleClickOption:(int)a0;
+ (BOOL)valueForTripleClickOption:(int)a0 fromSource:(long long)a1;
+ (BOOL)valueForZoomTripleClickOption;

@end
