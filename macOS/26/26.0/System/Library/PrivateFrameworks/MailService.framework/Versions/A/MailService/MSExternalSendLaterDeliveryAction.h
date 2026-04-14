@class NSNumber, ACAccount;

@interface MSExternalSendLaterDeliveryAction : MSExternalAction

@property (readonly) NSNumber *libraryID;
@property (readonly) ACAccount *account;
@property (readonly) int mailboxType;

+ (id)entityName;

- (id)initWithManagedObject:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLibraryID:(id)a0 account:(id)a1 destinationMailboxType:(int)a2;
- (id)managedObjectForContext:(id)a0;

@end
