@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (id)itemTypeName;
- (BOOL)hasAllPCSData;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_decryptPCS;
- (BOOL)_savePCSDataToCache;

@end
