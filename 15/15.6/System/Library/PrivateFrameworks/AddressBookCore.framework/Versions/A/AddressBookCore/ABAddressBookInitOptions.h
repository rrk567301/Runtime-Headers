@class NSString, NSArray, ABPersistentStoreCoordinatorCache;

@interface ABAddressBookInitOptions : NSObject

@property (nonatomic) char doInitialImports;
@property (nonatomic) char registerForChangeNotifications;
@property (nonatomic) char tracksAllSources;
@property (nonatomic) char provisional;
@property (nonatomic) char directoryResults;
@property (nonatomic) char overridesReadOnly;
@property (nonatomic) char hasUnfilteredAccess;
@property (nonatomic) char requiresSharedAddressBook;
@property (copy, nonatomic) NSString *databaseDirectory;
@property (retain, nonatomic) ABPersistentStoreCoordinatorCache *persistentStoreCoordinatorCache;
@property (copy, nonatomic) NSArray *delegateInfos;

+ (id)defaultOptions;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
