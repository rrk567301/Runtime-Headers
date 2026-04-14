@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_decryptPCS;
- (BOOL)hasAllPCSData;
- (BOOL)_savePCSDataToCache;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (id)itemTypeName;
- (void)_fetchZonePCS:(unsigned long long)a0;

@end
