@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void)logMessage:(id)a0;
- (id)containerIdentifier;
- (void)setupDatabase;
- (id)init;
- (id)cloudKitContainer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)apsConnectionMachServiceName;
- (id)databaseFilePath;
- (id)managedObjectModelName;
- (BOOL)saveIfPossible;
- (void)contentDidUpdate:(id)a0;
- (void)storesWillChange:(id)a0;

@end
