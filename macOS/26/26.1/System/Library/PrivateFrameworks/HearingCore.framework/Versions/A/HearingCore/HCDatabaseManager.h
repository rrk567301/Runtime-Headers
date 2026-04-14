@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void)logMessage:(id)a0;
- (id)apsConnectionMachServiceName;
- (id)databaseFilePath;
- (id)containerIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (id)cloudKitContainer;
- (void)setupDatabase;
- (id)init;
- (id)managedObjectModelName;
- (BOOL)saveIfPossible;
- (void)contentDidUpdate:(id)a0;
- (void)storesWillChange:(id)a0;

@end
