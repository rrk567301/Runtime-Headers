@class NSString;

@interface SMSystem_Client_RemoteTMDiskShare : SMSystem_Client

@property (retain) NSString *shareName;
@property (retain) NSString *humanName;
@property (readonly) long long sharedSystems;

+ (id)guiMonitorKeys;
+ (id)keyPathsForValuesAffectingVolumeName;
+ (id)keyPathsForValuesAffectingDisplayState;

- (void).cxx_destruct;
- (id)displayName;
- (id)volumeName;
- (BOOL)isMounted;
- (id)displayState;
- (BOOL)isMounting;
- (long long)defaultUIRank;
- (id)systemDescription;
- (id)volumeIcon;
- (id)volumeIconAccesibilityLabel;
- (id)availableActionLabel;
- (void)pressedActionButton:(id)a0;

@end
