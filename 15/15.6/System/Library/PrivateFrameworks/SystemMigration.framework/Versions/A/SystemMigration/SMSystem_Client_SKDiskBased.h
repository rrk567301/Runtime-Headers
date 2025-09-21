@class NSString;

@interface SMSystem_Client_SKDiskBased : SMSystem_Client

@property char isPasswordLocked;
@property char isEncrypted;
@property char isDefaultEffaceable;
@property char isFilevault;
@property char systemAndDataMounted;
@property (retain) NSString *protocol;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)guiInterestedKeys;
+ (id)guiMonitorKeys;
+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingUiRank;
+ (id)keyPathsForValuesAffectingVolumeIconAccesibilityLabel;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayState;
- (char)availableAction;
- (id)availableActionLabel;
- (void)pressedActionButton:(id)a0;
- (unsigned long long)uiRank;
- (char)validateFDEPassword:(id)a0;
- (id)volumeIconAccesibilityLabel;

@end
