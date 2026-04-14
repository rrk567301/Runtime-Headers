@interface CNCDMeContactFetcher : NSObject

+ (id)defaultMeContactIdentifierInPersistenceContext:(id)a0;
+ (id)meContactIdentifierInDefaultStoreInPersistenceContext:(id)a0 managedObjectContext:(id)a1;
+ (id)firstMeContactIdentifierFoundInStoresInPersistenceContext:(id)a0 managedObjectContext:(id)a1;
+ (id)meContactIdentifierInManagedObjectContext:(id)a0 store:(id)a1;
+ (id)meContactIdentifierFromInfos:(id)a0;
+ (id)_containersWithWritableFirstInPersistenceContext:(id)a0;
+ (id)_firstMeContactIdentifierInContainers:(id)a0 persistenceContext:(id)a1 managedObjectContext:(id)a2;
+ (id)allMeContactIdentifiersInPersistenceContext:(id)a0;
+ (id)defaultMeContactIdentifierInPersistenceStack:(id)a0 error:(id *)a1;
+ (id)allMeContactIdentifiersInPersistenceStack:(id)a0 error:(id *)a1;

@end
