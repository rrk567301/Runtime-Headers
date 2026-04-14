@class NSOperationQueue, NSObject, NSPersistentStoreCoordinator;

@interface MSExternalUpdatesManager : NSObject {
    NSObject *_notificationsLock;
    BOOL _registeredForNotifications;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) BOOL isMail;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (id)_managedObjectContext;
- (void)_localActionAdded:(id)a0;
- (long long)nextSequenceNumber;
- (BOOL)migrateAccountsWithIdentifierMapping:(id)a0 error:(id *)a1;
- (void)processLocalActions;
- (id)_mailboxForMailboxType:(int)a0 account:(id)a1;
- (void)_processLocalAppendAction:(id)a0;
- (void)_processSendLaterAction:(id)a0;
- (void)_processSendLaterDeleteAction:(id)a0;

@end
