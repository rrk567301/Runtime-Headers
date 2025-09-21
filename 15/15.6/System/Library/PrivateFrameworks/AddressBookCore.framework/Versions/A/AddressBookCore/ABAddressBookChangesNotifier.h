@class NSString, CNFuture, ABAddressBookNotificationInfo, CNCDManagedObjectContextSaveListener, ABManagedObjectContext;

@interface ABAddressBookChangesNotifier : NSObject <CNCDManagedObjectContextSaveListenerDelegate, CNCDPersistenceChangesNotifier> {
    ABManagedObjectContext *_context;
    char _isSharedInstanceOrClone;
}

@property (retain) CNCDManagedObjectContextSaveListener *saveListener;
@property (readonly, copy) NSString *addressBookDirectory;
@property (readonly) char isUsingDefaultAddressBookDirectory;
@property (readonly, copy) NSString *notificationID;
@property (readonly, weak) id notificationSource;
@property (readonly, retain) CNFuture *metadataController;
@property (retain) ABAddressBookNotificationInfo *preparedNotificationInfo;
@property (readonly, retain) ABManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)userInfoChangeSummary:(id)a0;
+ (char)userInfoHasChanges:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)contextDidSave:(id)a0;
- (void)contextWillSave:(id)a0;
- (id)sourcesAffectedByCurrentChanges;
- (void)addChangedRecordsToNotificationInfo:(id)a0;
- (id)initWithAddressBookDirectory:(id)a0 isUsingDefaultAddressBookDirectory:(char)a1 notificationID:(id)a2 notificationSource:(id)a3 metaDataController:(id)a4;
- (char)isMemoryBacked;
- (char)isSharedInstanceOrClone;
- (void)logPeopleWereDeleted:(id)a0;
- (id)makeCommonNotificationUserInfoDictionary;
- (void)nts_SendAddressBookDidSaveNotificationsWithPublicUserInfo:(id)a0 privateUserInfo:(id)a1 privateTablesChanged:(char)a2;
- (void)postDatabaseWillSaveNotification:(id)a0;
- (char)prepareNotificationInfo:(id)a0;
- (void)setManagedObjectContext:(id)a0 isSharedInstanceOrClone:(char)a1;
- (void)updateNotificationInfo:(id)a0 withRecords:(id)a1 userInfoKey:(id)a2 ignoreRecordsForKey:(id)a3;

@end
