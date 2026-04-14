@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (id)itemTypeName;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_createAdditionalPCS;
- (BOOL)needsChainPCSCreation;
- (BOOL)hasAllPCSData;
- (BOOL)_fetchDependentPCS;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_fetchPCSForPrivateZone;
- (void).cxx_destruct;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_decryptPCS;
- (BOOL)_savePCSDataToCache;

@end
