@class ABCustomPropertyCache, ABAddressBookNotificationInfo, NSArray, ABAddressBookChangesNotifier, ABPersistentStoreCoordinatorCache;

@interface ABAddressBookImpl : NSObject

@property (nonatomic) char createdOnMainThread;
@property char deactivated;
@property (nonatomic, getter=isProvisional) char provisional;
@property (nonatomic) char registeredForChangeNotifications;
@property (nonatomic, getter=isDirectoryResults) char directoryResults;
@property (nonatomic) char overridesReadOnly;
@property (nonatomic) char hasUnfilteredAccess;
@property (readonly, retain) ABCustomPropertyCache *customPropertyCache;
@property (retain) ABAddressBookNotificationInfo *preparedNotificationInfo;
@property (retain) ABPersistentStoreCoordinatorCache *persistentStoreCoordinatorCache;
@property (copy) NSArray *allocationBacktrace;
@property (retain) ABAddressBookChangesNotifier *changesNotifier;

- (void)dealloc;
- (id)init;

@end
