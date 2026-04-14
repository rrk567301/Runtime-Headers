@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) BOOL shouldCreateZoneishPCS;

- (void)_willRetryFetch;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (void)_fetchDepedentPCSInSharedDatabase;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;
- (void)_saveNewPCSOnZone:(id)a0 completion:(id /* block */)a1;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_decryptZonePCSUsingServiceIdentities;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (id)itemTypeName;
- (BOOL)hasAllPCSData;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (BOOL)_saveUpdatedPCSToServer;
- (BOOL)_savePCSDataToCache;

@end
