@class NSURL, NSManagedObjectModel, NSPersistentStoreDescription;

@interface STPersistenceConfiguration : NSObject

@property (class, readonly) NSURL *managedObjectModelURL;
@property (class, readonly) NSManagedObjectModel *managedObjectModel;
@property (class, readonly) NSPersistentStoreDescription *localPersistentXPCStoreDescription;

+ (id)persistentStoreURLForConfigurationName:(id)a0;
+ (id)persistentStoreDescriptionForConfigurationName:(id)a0 type:(id)a1;
+ (id)getLocalPersistentXPCStoreDescription;

@end
