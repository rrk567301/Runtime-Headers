@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)containerIdentifier;
- (void)logMessage:(id)a0;
- (id)apsConnectionMachServiceName;
- (id)cloudKitContainer;
- (void)setupDatabase;
- (BOOL)saveIfPossible;
- (id)managedObjectModelName;
- (id)databaseFilePath;
- (void)storesWillChange:(id)a0;
- (void)contentDidUpdate:(id)a0;

@end
