@class NSString, CNCDContainer;

@interface ABCDInfo : ABCDRecord

@property (retain, nonatomic) NSString *meUniqueId;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) CNCDContainer *container;

+ (id)_table;
+ (id)abEntityName;
+ (BOOL)_isPublicRecord;
+ (id)nts_createInfoInManagedObjectContext:(id)a0 inPersistentStoreAtURL:(id)a1;
+ (id)nts_persistentStoreForUrl:(id)a0 inCoordinator:(id)a1;
+ (id)nts_firstPersistentStoreForUrls:(id)a0 inCoordinator:(id)a1;

- (id)remoteLocations;
- (void)setRemoteLocations:(id)a0;
- (id)readSharingACL;
- (void)setReadSharingACL:(id)a0;
- (id)readWriteSharingACL;
- (void)setReadWriteSharingACL:(id)a0;
- (id)parentGroups;
- (id)fetchedContainerInManagedObjectContext:(id)a0 store:(id)a1;

@end
