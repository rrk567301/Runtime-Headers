@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)containerIdentifier;
- (id)cloudKitContainer;
- (id)apsConnectionMachServiceName;
- (id)databaseFilePath;
- (void).cxx_destruct;
- (void)setupDatabase;
- (id)init;
- (void)dealloc;
- (void)logMessage:(id)a0;
- (id)managedObjectModelName;
- (BOOL)saveIfPossible;
- (void)contentDidUpdate:(id)a0;
- (void)contentDidUpdateRemotely:(id)a0;
- (void)storesWillChange:(id)a0;

@end
