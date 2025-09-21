@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)containerIdentifier;
- (void)dealloc;
- (void)logMessage:(id)a0;
- (id)cloudKitContainer;
- (id)databaseFilePath;
- (id)init;
- (void)setupDatabase;
- (void).cxx_destruct;
- (id)apsConnectionMachServiceName;
- (id)managedObjectModelName;
- (BOOL)saveIfPossible;
- (void)contentDidUpdate:(id)a0;
- (void)storesWillChange:(id)a0;

@end
