@class NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface AXSSWordDescriptionManager : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSString *languageDialectCode;

+ (id)sharedInstance;

- (id)languageCode;
- (void).cxx_destruct;
- (id)descriptionForWord:(id)a0;
- (id)descriptionOfWord:(id)a0 forLanguage:(id)a1;

@end
