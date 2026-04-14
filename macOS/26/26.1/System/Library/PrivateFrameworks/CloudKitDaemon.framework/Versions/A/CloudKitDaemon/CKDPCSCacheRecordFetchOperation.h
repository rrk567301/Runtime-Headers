@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)hasAllPCSData;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_createAdditionalPCS;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchDependentPCS;
- (BOOL)_savePCSDataToCache;
- (BOOL)needsChainPCSCreation;
- (id)itemTypeName;
- (void).cxx_destruct;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_decryptPCS;

@end
