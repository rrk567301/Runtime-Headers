@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject

@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) long long modelVersion;

+ (id)directoryURL;
+ (id)legacyDirectoryURL;

- (void)migrateContainerIfNecessary;
- (id)insertDeveloperIdentityProviderInContext:(id)a0;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)developerIdentityProviderFetchRequest;
- (id)init;
- (id)initWithModelVersion:(long long)a0;

@end
