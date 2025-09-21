@class NSArray, CNUICoreContactScratchpad;

@interface CNUICoreContactEditingSession : NSObject

@property (retain, nonatomic) CNUICoreContactScratchpad *contactsAdded;
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsUpdated;
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsRemoved;
@property (readonly, nonatomic) NSArray *addedContacts;
@property (readonly, nonatomic) NSArray *updatedContacts;
@property (readonly, nonatomic) NSArray *removedContacts;
@property (readonly, nonatomic) char inProgress;

+ (char)isEdiingStateOfContactValid:(long long)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addContacts:(id)a0;
- (void)removeContacts:(id)a0;
- (void)updateContacts:(id)a0;
- (id)addedContactsMatchingContacts:(id)a0;
- (id)applyChangesToContacts:(id)a0;
- (char)containsAddedContactMatchingContact:(id)a0;
- (char)containsRemovedContactMatchingContact:(id)a0;
- (char)containsUpdatedContactMatchingContact:(id)a0;
- (long long)editingStateOfContact:(id)a0;
- (id)generateSaveRequest;
- (char)isContactUnseen:(id)a0;
- (id)removedContactsMatchingContacts:(id)a0;
- (id)updatedContactsMatchingContacts:(id)a0;
- (void)verifyConsistencyOfEditingSessionForContact:(id)a0;
- (char)wasContactAdded:(id)a0;
- (char)wasContactRemoved:(id)a0;
- (char)wasContactUpdated:(id)a0;

@end
