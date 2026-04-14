@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (id)itemTypeName;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_decryptPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_savePCSDataToCache;
- (BOOL)hasAllPCSData;

@end
