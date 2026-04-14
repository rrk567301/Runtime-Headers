@interface CNCDPersistenceStack : NSObject {
    id /* block */ _backendProvider;
}

@property id notificationSource;

+ (id)os_log_t;
+ (id)persistenceStackWithAccountCollection:(id)a0;
+ (id)defaultAccountCollection;
+ (id)accountIdentifierForManagedObject:(id)a0;
+ (id)accountIdentifierFromPersistentStoreURL:(id)a0;
+ (id)persistenceStackWithInMemoryBackend;
+ (id)persistenceStackWithPersistentStoreCoordinator:(id)a0 accountCollection:(id)a1;
+ (id)defaultContactsStoreDirectoryURL;
+ (void)_createContactsDirectoryIfNeededAtURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithBackendProvider:(id /* block */)a0;
- (id)makePersistenceContext;

@end
