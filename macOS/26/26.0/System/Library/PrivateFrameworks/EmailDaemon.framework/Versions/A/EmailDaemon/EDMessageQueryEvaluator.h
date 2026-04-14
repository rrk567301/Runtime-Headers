@class NSString, NSArray, EMQuery, EDMessagePersistence, NSPredicate, EFLocked, NSObject, EMMailboxScope;
@protocol OS_os_log;

@interface EDMessageQueryEvaluator : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMQuery *messageQuery;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (readonly, nonatomic) EFLocked *returnedMessageDatabaseIDs;
@property (readonly, nonatomic) NSArray *persistentIDsForFilterSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterMessages:(id)a0 unmatchedMessages:(id *)a1;
- (void)addMessagesToFilterSet:(id)a0;
- (void)removeMessagesFromFilterSet:(id)a0;
- (id)transformMessages:(id)a0 includeDeleted:(BOOL)a1;
- (id)transformMessages:(id)a0;
- (id)transformAndFilterMessages:(id)a0;
- (id)transformAndFilterMessages:(id)a0 includeDeleted:(BOOL)a1;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 filterMessagesByID:(BOOL)a2;
- (void).cxx_destruct;

@end
