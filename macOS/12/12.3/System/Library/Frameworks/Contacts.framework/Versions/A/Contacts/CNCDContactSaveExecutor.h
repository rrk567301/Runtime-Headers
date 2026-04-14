@class NSArray, NSMutableArray, CNCDSaveContext;

@interface CNCDContactSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;
@property (readonly, nonatomic) NSMutableArray *addedContactsToRefresh;
@property (readonly, nonatomic) NSMutableArray *updatedContactsToRefresh;
@property (readonly) NSArray *allContactIdentifiers;
@property (readonly) NSArray *insertedContactIdentifiers;

+ (id)contactsLinkedToContact:(id)a0 inSaveContext:(id)a1;

- (void).cxx_destruct;
- (void)collectIdentifiers;
- (void)addContacts;
- (void)updateCacheWithAddedContacts;
- (void)linkContacts;
- (void)unlinkContacts;
- (void)updateContacts;
- (void)updateMeContact;
- (void)deleteContacts;
- (void)associateAddedContact:(id)a0 withDatabaseRepresentation:(id)a1;
- (void)enumerateAddedContacts:(id /* block */)a0;
- (void)updateUnifiedContacts:(id)a0;
- (void)updateNonUnifiedContacts:(id)a0;
- (void)associateUpdatedContact:(id)a0 withDatabaseRepresentation:(id)a1;
- (void)applyDiff:(id)a0 toUnifiedContact:(id)a1 withIdentifierMap:(id)a2;
- (void)clearMeContact;
- (void)setMeContact:(id)a0;
- (id)initWithSaveContext:(id)a0;
- (void)saveContacts;
- (void)updateContactSnapshots;
- (void)refreshAddedContacts;
- (void)refreshUpdatedContacts;

@end
