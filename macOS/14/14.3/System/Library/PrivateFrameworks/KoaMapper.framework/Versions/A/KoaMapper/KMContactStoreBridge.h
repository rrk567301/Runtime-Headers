@class CNContactStore, NSString, KVItemMapper, NSData, KMProviderHistoryLog, NSDictionary;

@interface KMContactStoreBridge : NSObject <KMProviderDeltaDatasetBridge> {
    CNContactStore *_contactStore;
    KVItemMapper *_itemMapper;
    KMProviderHistoryLog *_log;
    NSData *_historyToken;
    NSDictionary *_mapperAdditionalFields;
    unsigned long long _version;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contactFetchKeys;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)version;
- (long long)itemType;
- (id)validity;
- (BOOL)isDeltaEligible;
- (void)changesAccepted;
- (void)resetDeltaState;
- (BOOL)enumerateDeltaItemsWithError:(id *)a0 addOrUpdateBlock:(id /* block */)a1 removeBlock:(id /* block */)a2;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)lastChangesAccepted;
- (id)originAppId;
- (void)recordDonationAttempt;
- (BOOL)_checkAuthorizationAndFetchMeCard;
- (id)_fetchContactsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)initWithContactStore:(id)a0 historyLog:(id)a1;

@end
