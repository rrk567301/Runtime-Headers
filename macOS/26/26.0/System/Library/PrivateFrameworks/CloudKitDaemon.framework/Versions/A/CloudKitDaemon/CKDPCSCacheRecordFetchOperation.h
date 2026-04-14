@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_createAdditionalPCS;
- (BOOL)_fetchDependentPCS;
- (BOOL)hasAllPCSData;
- (BOOL)_decryptPCS;
- (id)itemTypeName;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)needsChainPCSCreation;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_savePCSDataToCache;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (void).cxx_destruct;

@end
