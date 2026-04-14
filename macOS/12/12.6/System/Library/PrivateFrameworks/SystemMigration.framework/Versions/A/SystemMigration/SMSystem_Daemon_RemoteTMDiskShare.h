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
@property (readonly) BOOL usesGuestAccess;
@property (readonly) BOOL usesSinglePassword;
@property (readonly) BOOL requiresUsername;
@property (readonly) BOOL mountedFromServer;
@property (readonly) BOOL mountWithSMB;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingVolumeName;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (unsigned long long)requiredScannerState;
+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingAvailableActionLabel;

- (id)description;
- (void)invalidate;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)displayName;
- (id)UUID;
- (id)systemVersion;
- (id)accessibilityDescription;
- (id)systemName;
- (BOOL)isInternal;
- (id)volumeName;
- (BOOL)isMounted;
- (void)mount;
- (void)unmount;
- (unsigned long long)systemType;
- (BOOL)mount:(BOOL)a0;
- (id)childSystems;
- (BOOL)isMounting;
- (id)volumeIcon;
- (BOOL)availableAction;
- (id)modelIcon;
- (BOOL)selectableSystem;
- (BOOL)isMountableByUser;
- (void)unRegisterTimeMachineSystem:(id)a0;
- (void)searchForBackupsAtMountpoint:(id)a0;
- (BOOL)mountNetAuth:(BOOL)a0;
- (id)initWithURL:(id)a0 humanName:(id)a1 flags:(unsigned long long)a2 withParentTimeCapsuleLongTermIdentifier:(id)a3;
- (void)registerTimeMachineSystem:(id)a0;

@end
