@class NSObject, NSString, CKDPCSCache, NSError, CKDPCSData, CKDRecordPCSData;
@protocol OS_dispatch_group, CKSQLiteItem;

@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDPCSCache *cache;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKSQLiteItem> itemID;
@property (nonatomic) unsigned long long fetchOptions;
@property (nonatomic) char didFetchData;
@property (retain, nonatomic) CKDPCSData *pcsData;
@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) NSError *dependentPCSFetchError;
@property (nonatomic) char wasFetchedFromCache;
@property (nonatomic) int numRetries;
@property (nonatomic) char shouldRetry;
@property (retain, nonatomic) CKDRecordPCSData *parentPCSData;
@property (readonly, nonatomic) char hasAllPCSData;
@property (readonly, nonatomic) NSString *itemTypeName;
@property (getter=isPCSDataInvalidated) char pcsDataInvalidated;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)_willRetryFetch;
- (char)_createAdditionalPCS;
- (char)_decryptPCS;
- (char)_fetchDependentPCS;
- (char)_fetchPCSDataFromDatabase;
- (char)_fetchPCSDataFromServer;
- (char)_savePCSDataToCache;
- (char)_saveUpdatedPCSToServer;
- (char)canBeUsedForOperation:(id)a0 withOptions:(unsigned long long)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (char)makeStateTransition;
- (char)needsAdditionalPCSCreation;

@end
