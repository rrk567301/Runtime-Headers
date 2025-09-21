@class CNContactStore, NSMutableDictionary, IMDContactStoreChangeHistoryEventsHandler, NSData;

@interface IMDCNPersonAliasResolver : NSObject

@property (class, readonly, nonatomic) IMDCNPersonAliasResolver *sharedResolver;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactStore *acceptedContactStore;
@property (retain, nonatomic) NSData *currentHistoryToken;
@property (retain, nonatomic) NSMutableDictionary *aliasToCNIDMap;
@property (retain, nonatomic) IMDContactStoreChangeHistoryEventsHandler *contactsEventhandler;

- (id)init;
- (void).cxx_destruct;
- (void)CNRecordIDForAliases:(id)a0 completionHandler:(id /* block */)a1;
- (id)_fetchAliasToCNIDMapForAliases:(id)a0;
- (id)_batchFetchContactRecordIDForAliases:(id)a0;
- (id)_fetchContactFullNameAndOrganizationNameForHandleID:(id)a0;
- (id)_fetchContactGivenNameAndBirthdayForHandleID:(id)a0;
- (id)_fetchContactIdentifierForAlias:(id)a0;
- (id)_predicateForAlias:(id)a0;
- (id)_predicateForEmailAddress:(id)a0;
- (id)_predicateForPhoneNumber:(id)a0;
- (id)_preferCuratedContactFromFetchResults:(id)a0;
- (id)_updateAcceptedContactsInAliasToCNIDMap:(id)a0;
- (id)_updateAliasToCNIDMap:(id)a0 withHistoryToken:(id)a1;
- (BOOL)isCNContactFavorited:(id)a0;
- (BOOL)isFavoritedContact:(id)a0;

@end
