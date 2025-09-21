@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) char serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (void).cxx_destruct;
- (char)_createAdditionalPCS;
- (char)_decryptPCS;
- (char)_decryptRecordPCSInPrivateDatabase;
- (char)_decryptRecordPCSInSharedDatabase;
- (char)_fetchDependentPCS;
- (char)_fetchDependentPCSInSharedDatabase;
- (char)_fetchPCSDataFromDatabase;
- (char)_fetchPCSDataFromServer;
- (char)_fetchPCSForPrivateZone;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (char)_savePCSDataToCache;
- (char)hasAllPCSData;
- (id)itemTypeName;
- (char)needsChainPCSCreation;

@end
