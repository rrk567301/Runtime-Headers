@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) BOOL shouldCreateZoneishPCS;
@property (nonatomic) BOOL rolledPCSForZone;

- (void)_decryptZonePCSUsingServiceIdentities;
- (void)_saveNewPCSOnZone:(id)a0 completion:(id /* block */)a1;
- (int)operationType;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchDependentPCS;
- (BOOL)_checkAndUpdateZonePCSIfNeeded;
- (BOOL)_fetchPCSDataFromDatabase;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;
- (void)_fetchZoneParentPCSInSharedDatabase;
- (void)_decryptZonePCSUsingParentPCS;
- (void)_fetchSharePCSInSharedDatabase;
- (BOOL)_decryptPCS;
- (void)_willRetryFetch;
- (void)_decryptZonePCSUsingInvitedPCS;
- (BOOL)hasAllPCSData;
- (BOOL)_savePCSDataToCache;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_createAdditionalPCS;
- (BOOL)_saveUpdatedPCSToServer;
- (id)itemTypeName;

@end
