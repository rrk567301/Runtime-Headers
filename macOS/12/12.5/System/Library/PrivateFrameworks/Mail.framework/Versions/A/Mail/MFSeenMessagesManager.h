@class NSManagedObjectContext, NSManagedObject, NSArray;

@interface MFSeenMessagesManager : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSManagedObject *account;
@property (readonly, copy, nonatomic) NSArray *seenMessages;
@property (readonly, nonatomic) unsigned long long countOfSeenMessages;
@property (readonly, copy, nonatomic) NSArray *messagesToBeDeletedFromServer;

+ (id)_managedObjectContext;
+ (BOOL)migrateAccountFromAccountUID:(id)a0 toSystemAccountIdentifier:(id)a1 error:(id *)a2;
+ (void)closeSeenMessageStore;
+ (id)_sharedSeenMessagesStore;

- (id)init;
- (void).cxx_destruct;
- (void)saveChanges;
- (id)initWithAccountID:(id)a0 createAccount:(BOOL)a1;
- (id)addMessageID:(id)a0 dateSeen:(id)a1;
- (id)seenMessageForMessageID:(id)a0;
- (void)removeMessageIDs:(id)a0;
- (void)removeMessagesNotOnServer:(id)a0;
- (id)_accountForAccountID:(id)a0;
- (id)_addAccountWithID:(id)a0;
- (void)removeServerDeletedMessages;

@end
