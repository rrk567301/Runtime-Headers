@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (BOOL)hasAllPCSData;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_savePCSDataToCache;
- (id)itemTypeName;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_decryptPCS;

@end
