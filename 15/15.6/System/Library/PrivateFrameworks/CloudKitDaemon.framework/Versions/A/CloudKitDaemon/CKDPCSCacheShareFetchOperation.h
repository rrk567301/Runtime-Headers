@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (char)_decryptPCS;
- (char)_fetchPCSDataFromDatabase;
- (char)_fetchPCSDataFromServer;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (char)_savePCSDataToCache;
- (char)hasAllPCSData;
- (id)itemTypeName;

@end
