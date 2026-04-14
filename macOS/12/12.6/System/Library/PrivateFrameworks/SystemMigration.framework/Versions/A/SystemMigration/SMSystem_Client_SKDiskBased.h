@class NSString;

@interface SMSystem_Client_SKDiskBased : SMSystem_Client

@property BOOL isPasswordLocked;
@property BOOL isEncrypted;
@property BOOL isDefaultEffaceable;
@property BOOL isFilevault;
@property BOOL systemAndDataMounted;
@property (retain) NSString *protocol;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)guiMonitorKeys;
+ (id)guiInterestedKeys;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingUiRank;
+ (id)keyPathsForValuesAffectingVolumeIconAccesibilityLabel;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayState;
- (id)volumeIconAccesibilityLabel;
- (id)availableActionLabel;
- (void)pressedActionButton:(id)a0;
- (BOOL)availableAction;
- (BOOL)validateFDEPassword:(id)a0;
- (unsigned long long)uiRank;

@end
