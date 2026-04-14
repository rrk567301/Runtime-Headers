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
- (BOOL)isMounted;
- (id)volumeName;
- (id)displayState;
- (id)availableActionLabel;
- (long long)defaultUIRank;
- (BOOL)isMounting;
- (void)pressedActionButton:(id)a0;
- (id)systemDescription;
- (id)volumeIcon;
- (id)volumeIconAccesibilityLabel;

@end
