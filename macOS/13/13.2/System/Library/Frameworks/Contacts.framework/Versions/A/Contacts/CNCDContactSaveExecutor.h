@class NSArray, NSMutableArray, CNCDSaveContext;

@interface CNCDContactSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;
@property (readonly, nonatomic) NSMutableArray *addedContactsToRefresh;
@property (readonly, nonatomic) NSMutableArray *updatedContactsToRefresh;
@property (readonly) NSArray *allContactIdentifiers;
@property (readonly) NSArray *insertedContactIdentifiers;

+ (id)contactsLinkedToContact:(id)a0 inSaveContext:(id)a1;

- (void).cxx_destruct;
- (id)initWithSaveContext:(id)a0;
- (void)collectIdentifiers;
- (void)saveContacts;
- (void)addContacts;
- (void)updateCacheWithAddedContacts;
- (void)linkContacts;
- (void)assignLinkIdentifier:(id)a0 contacts:(id)a1;
- (void)unlinkContacts;
- (void)updateContacts;
- (void)updateNonUnifiedContacts:(id)a0;
- (void)updateUnifiedContacts:(id)a0;
- (void)applyDiff:(id)a0 toUnifiedContact:(id)a1 withIdentifierMap:(id)a2;
- (void)updateMeContact;
- (void)clearMeContact;
- (void)setMeContact:(id)a0;
- (void)deleteContacts;
- (void)updateContactSnapshots;
- (void)enumerateAddedContacts:(id /* block */)a0;
- (void)associateAddedContact:(id)a0 withDatabaseRepresentation:(id)a1;
- (void)associateUpdatedContact:(id)a0 withDatabaseRepresentation:(id)a1;
- (void)refreshAddedContacts;
- (void)refreshUpdatedContacts;

@end
