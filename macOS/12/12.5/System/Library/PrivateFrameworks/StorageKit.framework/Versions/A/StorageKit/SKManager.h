@class NSXPCConnection, NSString, NSArray, NSHashTable, NSSet, NSMutableDictionary, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface SKManager : SKBaseManager <SKManagerListener> {
    BOOL diskQueueStuck;
    BOOL _shouldBeBindingsSafe;
    NSMutableSet *allDisks;
    NSMutableDictionary *_diskOperationMap;
    NSSet *visibleRoles;
    NSArray *imageSrcArray;
    BOOL _didInitiallyPopulate;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_diskNotificationQueue;
    NSHashTable *_listeners;
    NSMutableDictionary *_listenersAppearedDisks;
    NSObject<OS_dispatch_queue> *_waitingForDiskQueue;
    NSMutableSet *_waitingForDiskSet;
    NSArray *_filesystems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)defaultVisibleRoles;
+ (id)sharedManagerWithBindingsSafety:(BOOL)a0;

- (void).cxx_destruct;
- (BOOL)isBusy;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (id)filesystems;
- (id)allDisks;
- (id)initWithBindingSafety:(BOOL)a0;
- (void)resizeLimitsForDisk:(id)a0 completionBlock:(id /* block */)a1;
- (id)allDisksSet;
- (id)knownDisksForDictionaries:(id)a0 waitingForDaemon:(BOOL)a1 fromSet:(id)a2;
- (id)knownDiskForDictionary:(id)a0 waitingForDaemon:(BOOL)a1 fromSet:(id)a2;
- (void)knownDiskForDictionary:(id)a0 notify:(id /* block */)a1 onQueue:(id)a2;
- (void)createRAIDSetType:(id)a0 name:(id)a1 disks:(id)a2 format:(id)a3 options:(id)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)_recacheDisk:(id)a0 notifyWhenDone:(id /* block */)a1;
- (void)_disksAppeared:(id)a0 toListener:(id)a1;
- (void)_initialPopulateCompleteForListener:(id)a0;
- (void)initialPopulateComplete;
- (id)knownDiskForDictionary:(id)a0 waitingForDaemon:(BOOL)a1;
- (id)newDiskWithDictionary:(id)a0;
- (void)disksChanged:(id)a0;
- (void)disksAppeared:(id)a0;
- (void)disksDisappeared:(id)a0;
- (id)knownDisksForDictionaries:(id)a0 waitingForDaemon:(BOOL)a1;
- (void)managerStalled;
- (void)managerResumed;
- (void)setVisibleRoles:(id)a0;
- (id)visibleRoles;
- (id)visibleDisks;
- (id)diskForPath:(id)a0;
- (id)logicalVoumeGroupForCSLV:(id)a0;
- (id)physicalVolumesForCSLVG:(id)a0;
- (id)logicalVoumeGroupForCSPV:(id)a0;
- (id)wholeDiskForDisk:(id)a0;
- (id)childDisksForWholeDisk:(id)a0;
- (BOOL)compositeDisks:(id)a0 volumeName:(id)a1 progressBlock:(id /* block */)a2 callbackBlock:(id /* block */)a3;
- (void)volumesForDiskImageFileURL:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (unsigned long long)enclosingVolumeCount;
- (id)enclosingDiskAtLevel:(unsigned long long)a0;
- (id)formatableFileSystems;
- (id)filesystemWithSKType:(id)a0 isCaseSensitive:(BOOL)a1 isEncrypted:(BOOL)a2;
- (id)setForRAIDMember:(id)a0;
- (id)membersForRAIDSet:(id)a0;
- (id)raidForContentDisk:(id)a0;
- (id)physicalStoresForAPFSVolume:(id)a0;
- (id)volumesForAPFSPS:(id)a0;
- (void)createAPFSContainerWithDisks:(id)a0 progressBlock:(id /* block */)a1 callbackBlock:(id /* block */)a2;
- (id)knownDisksForDictionaries:(id)a0;
- (id)knownDiskForDictionary:(id)a0;
- (BOOL)factoryReset:(id /* block */)a0;
- (void)_recacheDisk:(id)a0;
- (BOOL)_DEBUG_sanityCheckDiskType:(id)a0;

@end
