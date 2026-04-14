@class NSString, NSDictionary, NSURL, TMSparsebundle, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_TMSparseBundle : SMSystem_Daemon

@property (retain) TMSparsebundle *tmSparseBundle;
@property (retain) NSMutableSet *timeMachineSystems;
@property unsigned long long totalSystems;
@property unsigned long long foundSystems;
@property (retain) NSURL *volume;
@property (retain) NSURL *sparseBundleURL;
@property (retain) NSMutableSet *mountPoints;
@property BOOL encryptedBundle;
@property (retain) NSString *systemName;
@property (retain) NSObject<OS_dispatch_queue> *timeMachineSystemsQueue;
@property (retain) NSObject<OS_dispatch_queue> *mountPointsQueue;
@property (retain) NSDictionary *parentLongTermIdentifier;

+ (id)keyPathsForValuesAffectingModelIcon;
+ (id)keyPathsForValuesAffectingAvailableAction;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (id)accessibilityDescription;
- (BOOL)isMounted;
- (id)volumeName;
- (void)mount;
- (void)unmount;
- (unsigned long long)systemType;
- (id)childSystems;
- (BOOL)availableAction;
- (BOOL)selectableSystem;
- (id)modelIcon;
- (void)mountWithCredentials:(id)a0;
- (id)terseDescription;
- (void)registerTimeMachineSystem:(id)a0;
- (void)unRegisterTimeMachineSystem:(id)a0;
- (void)volumeMounted:(id)a0;
- (id)initWithSparseBundle:(id)a0 onVolume:(id)a1 withParentLongTermIdentifier:(id)a2;
- (void)updateTotalSystems:(unsigned long long)a0;
- (void)mountSparseBundleBackupsWithPassword:(id)a0;

@end
