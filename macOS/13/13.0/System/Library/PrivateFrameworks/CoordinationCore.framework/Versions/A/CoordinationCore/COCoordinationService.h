@class NSObject, COMeshController, NSDictionary, COMediaGroupsAdapter, NSString, COHomeKitAdapter;
@protocol OS_dispatch_queue;

@interface COCoordinationService : NSObject <COServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isMigrating;
}

@property (class, retain, nonatomic) COCoordinationService *singleton;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) double pingMinimum;
@property (readonly, nonatomic) double pingMaximum;
@property (readonly, nonatomic) COHomeKitAdapter *hkAdapter;
@property (readonly, nonatomic) COMediaGroupsAdapter *mgAdapter;
@property (readonly, nonatomic) NSDictionary *services;
@property (retain, nonatomic) COMeshController *homeMesh;
@property (retain, nonatomic) COMeshController *zoneMesh;
@property (retain, nonatomic) COMeshController *roomMesh;
@property (retain, nonatomic) COMeshController *groupMesh;
@property (retain, nonatomic) COMeshController *pairMesh;
@property (retain, nonatomic) COMeshController *activityGroupMesh;
@property (retain, nonatomic) COMeshController *dynamicGroupMesh;
@property (retain, nonatomic) NSDictionary *meshes;
@property (retain, nonatomic) NSDictionary *suspendedMeshes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithConstituentType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (void)_significantHomeChange:(id)a0;
- (void)didStopMeshController:(id)a0;
- (void)_activityGroupsChange:(id)a0;
- (void)_userDidBecomeActive:(id)a0;
- (void)_userDidResignActive:(id)a0;
- (void)ensureOnDemandControllerForCluster:(id)a0 completion:(id /* block */)a1;
- (id)_initWithConstituentType:(unsigned long long)a0;
- (void)_initiateMigrationFrom:(long long)a0;
- (void)_continueMigration;
- (void)_completeMigration;
- (void)_continueInitialization;
- (void)_initializeServices;
- (void)_initializeAddOns;
- (void)_linkServicesToMeshController:(id)a0;
- (void)_linkServices:(id)a0 toMeshController:(id)a1 forCluster:(id)a2;
- (void)_unlinkServicesFromMeshController:(id)a0;
- (id)_clusterNameForMeshController:(id)a0;
- (id)_controllerForHomeKitEntity_unsafe:(id)a0 label:(id)a1;
- (void)_controllerForCluster_unsafe:(id)a0 label:(id)a1 result:(id /* block */)a2;
- (id)_controllerForActivityGroup_unsafe;
- (id)_controllerForDynamicGroup_unsafe;
- (void)_suspendAllMeshes;
- (void)_resumeAllSuspendedMeshes;

@end
