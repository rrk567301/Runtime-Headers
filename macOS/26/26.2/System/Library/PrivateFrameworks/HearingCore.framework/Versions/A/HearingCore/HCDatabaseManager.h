@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)apsConnectionMachServiceName;
- (void)logMessage:(id)a0;
- (id)databaseFilePath;
- (id)containerIdentifier;
- (void).cxx_destruct;
- (id)cloudKitContainer;
- (void)setupDatabase;
- (id)init;
- (void)dealloc;
- (id)managedObjectModelName;
- (BOOL)saveIfPossible;
- (void)contentDidUpdate:(id)a0;
- (void)storesWillChange:(id)a0;

@end
