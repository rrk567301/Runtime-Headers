@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)hasAllPCSData;
- (BOOL)_decryptPCS;
- (id)itemTypeName;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_savePCSDataToCache;
- (BOOL)_fetchPCSDataFromServer;

@end
