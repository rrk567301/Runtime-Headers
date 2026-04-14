@class NSString, NSArray, ABPersistentStoreCoordinatorCache;

@interface ABAddressBookInitOptions : NSObject

@property (nonatomic) BOOL doInitialImports;
@property (nonatomic) BOOL registerForChangeNotifications;
@property (nonatomic) BOOL tracksAllSources;
@property (nonatomic) BOOL provisional;
@property (nonatomic) BOOL directoryResults;
@property (nonatomic) BOOL overridesReadOnly;
@property (nonatomic) BOOL hasUnfilteredAccess;
@property (copy, nonatomic) NSString *databaseDirectory;
@property (retain, nonatomic) ABPersistentStoreCoordinatorCache *persistentStoreCoordinatorCache;
@property (copy, nonatomic) NSArray *delegateInfos;

+ (id)defaultOptions;

- (id)description;
- (void).cxx_destruct;

@end
