@interface AXTripleClickHelpers : NSObject

+ (void)_toggleSmartInvertColorsOffMainThread;
+ (id)tripleClickOptionDidChangeNotification;
+ (id)titleForTripleClickOption:(int)a0;
+ (BOOL)valueForTripleClickOption:(int)a0;
+ (BOOL)valueForTripleClickOption:(int)a0 fromSource:(long long)a1;
+ (BOOL)_localValueForTripleClickOption:(int)a0;
+ (BOOL)valueForZoomTripleClickOption;
+ (void)_toggleVoiceOver;
+ (void)_promptToDisableBrightnessFilters:(id /* block */)a0 data:(id)a1;
+ (void)toggleColorFilter;
+ (void)toggleZoomOffMainThread;
+ (void)_toggleAssistiveTouch;
+ (void)toggleReduceWhitePoint;
+ (void)toggleGuidedAccessFromControlCenter;
+ (void)toggleFullKeyboardAccess;
+ (void)toggleTripleClickOption:(int)a0;
+ (void)toggleTripleClickOption:(int)a0 fromSource:(long long)a1;
+ (void)_localToggleTripleClickOption:(int)a0;
+ (id)allTripleClickOptions;
+ (id)allTripleClickOptionsForPlatform:(long long)a0;
+ (id)_allAvailableFeaturesIOS;
+ (id)_allAvailableFeaturesWatchOS;
+ (id)_availableFeatures;
+ (BOOL)_shouldShowFeatureInShortcutsControlCenterModule:(int)a0 includeGuidedAccess:(BOOL)a1;
+ (id)tripleClickOptionsForAccessibilityShortcutControlCenterModuleIncludingGuidedAccess:(BOOL)a0;

@end
