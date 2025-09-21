@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) char needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) char shouldCreateZoneishPCS;
@property (nonatomic) char rolledPCSForZone;

- (int)operationType;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_willRetryFetch;
- (char)_checkAndUpdateZonePCSIfNeeded;
- (char)_createAdditionalPCS;
- (char)_decryptPCS;
- (void)_decryptZonePCSUsingServiceIdentities;
- (void)_fetchDepedentPCSInSharedDatabase;
- (char)_fetchDependentPCS;
- (char)_fetchPCSDataFromDatabase;
- (char)_fetchPCSDataFromServer;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (void)_saveNewPCSOnZone:(id)a0 completion:(id /* block */)a1;
- (char)_savePCSDataToCache;
- (char)_saveUpdatedPCSToServer;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;
- (char)hasAllPCSData;
- (id)itemTypeName;

@end
