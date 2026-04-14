@class NSOperationQueue, NSObject, NSPersistentStoreCoordinator;

@interface MSExternalUpdatesManager : NSObject {
    NSObject *_notificationsLock;
    BOOL _registeredForNotifications;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) BOOL isMail;

+ (id)sharedInstance;
+ (id)log;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (void)addAction:(id)a0;
- (id)init;
- (long long)nextSequenceNumber;
- (void).cxx_destruct;
- (id)_managedObjectContext;
- (id)_mailboxForMailboxType:(int)a0 account:(id)a1;
- (void)_processGeneratedSummaryAction:(id)a0;
- (void)_localActionAdded:(id)a0;
- (void)_processLocalAppendAction:(id)a0;
- (void)_processSendLaterAction:(id)a0;
- (void)_processSendLaterDeleteAction:(id)a0;
- (BOOL)migrateAccountsWithIdentifierMapping:(id)a0 error:(id *)a1;
- (void)processLocalActions;

@end
