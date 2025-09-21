@class NSURL, NSString, CCDatabaseSetStateReader, CCDatabaseDeviceMapping, NSObject, CCSet;
@protocol CCDonateServiceProvider;

@interface CCSetVersionedMergeable : NSObject <CKVersionedMergeable> {
    CCSet *_set;
    CCDatabaseSetStateReader *_stateReader;
    NSObject<CCDonateServiceProvider> *_donateServiceProvider;
    CCDatabaseDeviceMapping *_cachedDeviceMapping;
    NSURL *_mergeableDeltasFileURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyStateVector;
+ (id)readOnlyInstanceForSet:(id)a0 mergeableDeltasFileURL:(id)a1 database:(id)a2;
+ (id)writeOnlyInstanceForSet:(id)a0 donateServiceProvider:(id)a1;

- (void).cxx_destruct;
- (BOOL)mergeDeltas:(id)a0 error:(id *)a1;
- (id)mergeableDeltasForMetadata:(id)a0 error:(id *)a1;
- (id)stateVector;
- (BOOL)_donateRemoteUpdateWithType:(unsigned char)a0 fromPeerDeviceUUID:(id)a1 peerDeviceSite:(id)a2 relayedDeviceSites:(id)a3 mergeableDelta:(id)a4;
- (BOOL)_loadCachedDeviceMapping:(id *)a0;
- (BOOL)attestInSyncPeerDeviceUUID:(id)a0 deviceSite:(id)a1 relayedDeviceSites:(id)a2;
- (BOOL)expirePeerDeviceUUID:(id)a0;
- (BOOL)hasNoPresentContent;
- (id)initWithSet:(id)a0 readAccess:(id)a1 donateServiceProvider:(id)a2 mergeableDeltasFileURL:(id)a3;
- (id)localDeviceSiteAddingExpirationDate:(id)a0;
- (BOOL)mergeUpdateFromPeerDeviceUUID:(id)a0 deviceSite:(id)a1 relayedDeviceSites:(id)a2 mergeableDelta:(id)a3;
- (id)mergeableDeltaAfterStateVector:(id)a0 atomBatchVersion:(unsigned char)a1 options:(unsigned short)a2;
- (id)mergeableDeltasForMetadata:(id)a0 atomBatchVersion:(unsigned char)a1 error:(id *)a2;
- (id)relayedDeviceSitesExcludingRequestingDeviceUUID:(id)a0;
- (id)storedActiveDeviceSiteWithDeviceUUID:(id)a0;

@end
