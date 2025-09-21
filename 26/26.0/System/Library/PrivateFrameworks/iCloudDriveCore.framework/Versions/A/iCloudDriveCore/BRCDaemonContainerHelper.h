@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper> {
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
    int _TCCAccessChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHelper;

- (id)_init;
- (id)fetchAllContainersByIDWithError:(id *)a0;
- (void)_computeTCCEnabledDisabledBundleIdentifiers;
- (void)dealloc;
- (BOOL)canFetchAllContainersByID;
- (unsigned short)br_capabilityToMoveFromLocalItem:(id)a0 toNewParent:(id)a1 session:(id)a2 error:(id *)a3;
- (BOOL)cloudSyncTCCDisabledForContainerMeta:(id)a0;
- (unsigned short)br_capabilityToMoveFromURL:(id)a0 toNewParent:(id)a1 error:(id *)a2;
- (id)fetchContainerForMangledID:(id)a0 personaID:(id)a1;
- (id)itemIDForURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
