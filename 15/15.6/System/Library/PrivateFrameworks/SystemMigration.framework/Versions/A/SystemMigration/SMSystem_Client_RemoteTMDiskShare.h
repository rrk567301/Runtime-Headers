@class NSString;

@interface SMSystem_Client_RemoteTMDiskShare : SMSystem_Client

@property (retain) NSString *shareName;
@property (retain) NSString *humanName;
@property (readonly) long long sharedSystems;

+ (id)guiMonitorKeys;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingVolumeName;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayState;
- (char)isMounted;
- (id)volumeName;
- (id)availableActionLabel;
- (long long)defaultUIRank;
- (char)isMounting;
- (void)pressedActionButton:(id)a0;
- (id)systemDescription;
- (id)volumeIcon;
- (id)volumeIconAccesibilityLabel;

@end
