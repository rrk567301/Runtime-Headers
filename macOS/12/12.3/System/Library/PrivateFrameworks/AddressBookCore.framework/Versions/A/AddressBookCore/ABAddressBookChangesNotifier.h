@class NSString, CNFuture, ABAddressBookNotificationInfo, CNCDManagedObjectContextSaveListener, ABManagedObjectContext;

@interface ABAddressBookChangesNotifier : NSObject <CNCDManagedObjectContextSaveListenerDelegate, CNCDPersistenceChangesNotifier> {
    ABManagedObjectContext *_context;
    BOOL _isSharedInstanceOrClone;
}

@property (retain) CNCDManagedObjectContextSaveListener *saveListener;
@property (readonly, copy) NSString *addressBookDirectory;
@property (readonly) BOOL isUsingDefaultAddressBookDirectory;
@property (readonly, copy) NSString *notificationID;
@property (readonly, weak) id notificationSource;
@property (readonly, retain) CNFuture *metadataController;
@property (retain) ABAddressBookNotificationInfo *preparedNotificationInfo;
@property (readonly, retain) ABManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)userInfoHasChanges:(id)a0;
+ (id)userInfoChangeSummary:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)contextWillSave:(id)a0;
- (void)contextDidSave:(id)a0;
- (id)makeCommonNotificationUserInfoDictionary;
- (BOOL)isMemoryBacked;
- (BOOL)isSharedInstanceOrClone;
- (void)setManagedObjectContext:(id)a0 isSharedInstanceOrClone:(BOOL)a1;
- (id)initWithAddressBookDirectory:(id)a0 isUsingDefaultAddressBookDirectory:(BOOL)a1 notificationID:(id)a2 notificationSource:(id)a3 metaDataController:(id)a4;
- (void)updateNotificationInfo:(id)a0 withRecords:(id)a1 userInfoKey:(id)a2 ignoreRecordsForKey:(id)a3;
- (BOOL)prepareNotificationInfo:(id)a0;
- (void)postDatabaseWillSaveNotification:(id)a0;
- (void)addChangedRecordsToNotificationInfo:(id)a0;
- (id)sourcesAffectedByCurrentChanges;
- (void)logPeopleWereDeleted:(id)a0;
- (void)nts_SendAddressBookDidSaveNotificationsWithPublicUserInfo:(id)a0 privateUserInfo:(id)a1 privateTablesChanged:(BOOL)a2;

@end
