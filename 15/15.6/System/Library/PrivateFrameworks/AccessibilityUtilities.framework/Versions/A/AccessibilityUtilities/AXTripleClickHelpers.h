@interface AXTripleClickHelpers : NSObject

@property (class, nonatomic) char switchControlRendersDeviceUnusable;
@property (class, nonatomic) char switchControlHasScreenSwitch;

+ (void)_toggleLocalizationCaptionPanel;
+ (id)symbolNameForTripleClickOption:(int)a0;
+ (id)_allAvailableFeaturesIOS;
+ (id)_allAvailableFeaturesWatchOS;
+ (id)_availableFeatures;
+ (void)_disableSwitchControlWithHandler:(id /* block */)a0;
+ (id)_displayFilterUIClient;
+ (void)_handleToggleTripleClickTriggeredFromAppIntent:(int)a0;
+ (char)_isAccessibilityAppIntentsProcess;
+ (void)_localToggleTripleClickOption:(int)a0;
+ (char)_localValueForTripleClickOption:(int)a0;
+ (void)_promptToDisableBrightnessFilters:(id /* block */)a0 data:(id)a1;
+ (char)_shouldShowFeatureInShortcutsControlCenterModule:(int)a0 includeGuidedAccess:(char)a1;
+ (void)_toggleAssistiveTouch;
+ (void)_toggleClassicInvertColors;
+ (void)_toggleSmartInvertColorsOffMainThread;
+ (void)_toggleSwitchOver;
+ (void)_toggleSwitchOverOffMainThread;
+ (void)_toggleVoiceOver;
+ (id)allTripleClickOptions;
+ (id)allTripleClickOptionsForPlatform:(long long)a0;
+ (char)isReduceWhitePointEnabled;
+ (id)localizationKeyForTripleClickOption:(int)a0;
+ (long long)stateForTripleClickOption:(int)a0;
+ (id)titleForTripleClickOption:(int)a0;
+ (void)toggleColorFilter;
+ (void)toggleFullKeyboardAccess;
+ (void)toggleGuidedAccess;
+ (void)toggleHearingControlCenter;
+ (void)toggleLiveSpeech;
+ (void)toggleReduceWhitePoint;
+ (void)toggleTripleClickOption:(int)a0;
+ (void)toggleTripleClickOption:(int)a0 fromSource:(long long)a1;
+ (void)toggleZoomOffMainThread;
+ (id)tripleClickOptionDidChangeNotification;
+ (id)tripleClickOptionsForAccessibilityShortcutControlCenterModuleIncludingGuidedAccess:(char)a0;
+ (char)valueForTripleClickOption:(int)a0;
+ (char)valueForTripleClickOption:(int)a0 fromSource:(long long)a1;
+ (char)valueForZoomTripleClickOption;

@end
