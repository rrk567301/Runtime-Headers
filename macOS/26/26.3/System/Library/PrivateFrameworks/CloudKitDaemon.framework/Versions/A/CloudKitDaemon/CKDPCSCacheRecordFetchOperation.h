@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (id)itemTypeName;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_fetchDependentPCS;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_decryptPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_createAdditionalPCS;
- (void).cxx_destruct;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)needsChainPCSCreation;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_savePCSDataToCache;
- (BOOL)hasAllPCSData;

@end
