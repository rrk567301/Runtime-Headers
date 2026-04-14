@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (void).cxx_destruct;
- (id)itemTypeName;
- (BOOL)hasAllPCSData;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (BOOL)_savePCSDataToCache;
- (BOOL)needsChainPCSCreation;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_decryptRecordPCSInSharedDatabase;

@end
