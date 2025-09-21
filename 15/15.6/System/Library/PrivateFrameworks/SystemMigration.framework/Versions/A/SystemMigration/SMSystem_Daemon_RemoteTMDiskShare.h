@class NSString, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_RemoteTMDiskShare : SMSystem_Daemon

@property (retain) NSDictionary *parentLongTermIdentifier;
@property (retain) NSString *mountPoint;
@property (retain) NSString *humanName;
@property long long sharedSystems;
@property long long dmgsProcessed;
@property unsigned long long flags;
@property (retain) NSMutableSet *timeMachineSystems;
@property (retain) NSObject<OS_dispatch_queue> *timeMachineSystemsQueue;
@property (retain) NSString *shareName;
@property (readonly) char usesGuestAccess;
@property (readonly) char usesSinglePassword;
@property (readonly) char requiresUsername;
@property (readonly) char mountedFromServer;
@property (readonly) char mountWithSMB;
@property (readonly) char mountWithAFP;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingAvailableActionLabel;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingVolumeName;
+ (unsigned long long)requiredScannerState;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)invalidate;
- (id)UUID;
- (id)displayName;
- (id)systemVersion;
- (id)accessibilityDescription;
- (id)systemName;
- (char)isInternal;
- (void)unmount;
- (char)isMounted;
- (void)mount;
- (id)volumeName;
- (unsigned long long)systemType;
- (char)availableAction;
- (id)childSystems;
- (void)cleanExSparseBundleMountPaths;
- (id)createUniqueMountPointFolderForSparseBundleMounts;
- (id)initWithURL:(id)a0 humanName:(id)a1 flags:(unsigned long long)a2 withParentTimeCapsuleLongTermIdentifier:(id)a3;
- (char)isMountableByUser;
- (char)isMounting;
- (id)modelIcon;
- (char)mount:(char)a0;
- (char)mountNetAuth:(char)a0;
- (void)registerTimeMachineSystem:(id)a0;
- (void)searchForBackupsAtMountpoint:(id)a0;
- (char)selectableSystem;
- (id)terseDescription;
- (void)unRegisterTimeMachineSystem:(id)a0;
- (id)volumeIcon;

@end
