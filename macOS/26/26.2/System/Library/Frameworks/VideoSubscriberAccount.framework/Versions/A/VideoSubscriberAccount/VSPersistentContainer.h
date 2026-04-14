@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject

@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) long long modelVersion;

+ (id)directoryURL;
+ (id)legacyDirectoryURL;

- (void)migrateContainerIfNecessary;
- (void).cxx_destruct;
- (id)initWithModelVersion:(long long)a0;
- (id)insertDeveloperIdentityProviderInContext:(id)a0;
- (id)init;
- (id)developerIdentityProviderFetchRequest;
- (void)performBlock:(id /* block */)a0;

@end
