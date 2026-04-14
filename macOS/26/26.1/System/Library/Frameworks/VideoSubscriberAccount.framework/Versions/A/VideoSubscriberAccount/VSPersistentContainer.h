@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject

@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) long long modelVersion;

+ (id)directoryURL;
+ (id)legacyDirectoryURL;

- (void)performBlock:(id /* block */)a0;
- (id)developerIdentityProviderFetchRequest;
- (id)insertDeveloperIdentityProviderInContext:(id)a0;
- (id)initWithModelVersion:(long long)a0;
- (void).cxx_destruct;
- (void)migrateContainerIfNecessary;
- (id)init;

@end
