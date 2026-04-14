@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (id)itemTypeName;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)hasAllPCSData;
- (BOOL)_fetchPCSDataFromServer;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_decryptPCS;
- (BOOL)_savePCSDataToCache;

@end
