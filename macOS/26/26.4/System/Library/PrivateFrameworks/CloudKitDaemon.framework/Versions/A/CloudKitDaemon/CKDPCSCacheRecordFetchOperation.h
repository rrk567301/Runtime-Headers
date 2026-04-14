@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchDependentPCS;
- (BOOL)needsChainPCSCreation;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (void).cxx_destruct;
- (BOOL)_decryptPCS;
- (BOOL)hasAllPCSData;
- (BOOL)_savePCSDataToCache;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_fetchPCSForPrivateZone;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_createAdditionalPCS;
- (id)itemTypeName;

@end
