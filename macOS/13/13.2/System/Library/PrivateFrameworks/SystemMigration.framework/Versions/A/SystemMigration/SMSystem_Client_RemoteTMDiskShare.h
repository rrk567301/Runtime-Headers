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
- (BOOL)isMounted;
- (id)volumeName;
- (id)displayState;
- (long long)defaultUIRank;
- (BOOL)isMounting;
- (id)systemDescription;
- (id)volumeIcon;
- (id)volumeIconAccesibilityLabel;
- (id)availableActionLabel;
- (void)pressedActionButton:(id)a0;

@end
