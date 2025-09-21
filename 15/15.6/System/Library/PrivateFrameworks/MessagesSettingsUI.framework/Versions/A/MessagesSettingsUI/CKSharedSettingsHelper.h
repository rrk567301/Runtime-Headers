@interface CKSharedSettingsHelper : NSObject

+ (id)sharedInstance;
+ (id)currentKeepMessages;
+ (char)currentMessageAutoKeepForType;
+ (int)currentMessageAutoKeepOptionForType;

- (char)isRaiseGestureSupported;
- (char)shouldShowCharacterCount;
- (char)isSMSDevice;
- (char)_isProximityMonitoringSupported;
- (char)areReadReceiptsEnabled;
- (id)getAudioMessageAutoKeep;
- (char)getRaiseToListenEnabled;
- (char)isCheckInAllowedInRegion;
- (void)satelliteDemoModeTapped;
- (void)setAudioMessageAutoKeep:(id)a0;
- (void)setConversationListFilteringEnabled:(char)a0;
- (void)setRaiseToListenEnabled:(char)a0;
- (void)setReadReceiptsEnabled:(char)a0;
- (char)shouldShowCheckInLocationHistorySettings;
- (char)shouldShowMMS;
- (char)shouldShowSatelliteDemoModeButton;

@end
