@class NSArray, NSMutableArray, CNCDSaveContext;

@interface CNCDContactSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;
@property (readonly, nonatomic) NSMutableArray *addedContactsToRefresh;
@property (readonly, nonatomic) NSMutableArray *updatedContactsToRefresh;
@property (readonly, nonatomic) NSMutableArray *posterDataChangeRequests;
@property (readonly) NSArray *allContactIdentifiers;
@property (readonly) NSArray *insertedContactIdentifiers;

+ (id)contactsLinkedToContact:(id)a0 inSaveContext:(id)a1;

- (void)setMeContact:(id)a0;
- (void)updateContacts;
- (void)updateMeContact;
- (void).cxx_destruct;
- (id)_addCNCDContactUsingDiff:(id)a0 containerIdentifier:(id)a1 contactIdentifier:(id)a2;
- (void)_logImportantChanges:(id)a0 updatedContact:(id)a1;
- (void)addContacts;
- (void)applyDiff:(id)a0 toUnifiedContact:(id)a1 withIdentifierMap:(id)a2;
- (void)assignLinkIdentifier:(id)a0 contacts:(id)a1;
- (void)associateAddedContact:(id)a0 withDatabaseRepresentation:(id)a1;
- (void)associateUpdatedContact:(id)a0 withDatabaseRepresentation:(id)a1;
- (void)clearMeContact;
- (void)collectIdentifiers;
- (void)deleteContacts;
- (void)enumerateAddedContacts:(id /* block */)a0;
- (id)initWithSaveContext:(id)a0;
- (void)linkContacts;
- (void)refreshAddedContacts;
- (void)refreshUpdatedContacts;
- (void)saveContacts;
- (void)unlinkContacts;
- (void)updateCacheWithAddedContacts;
- (void)updateContactSnapshots;
- (void)updateNonUnifiedContacts:(id)a0;
- (void)updateUnifiedContacts:(id)a0;
- (void)writeChangesToPosterStore;

@end
