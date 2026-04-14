@interface CNCDPersistenceStack : NSObject {
    id /* block */ _backendProvider;
}

@property id notificationSource;

+ (id)defaultContactsStoreDirectoryURL;
+ (id)defaultAccountCollection;
+ (void)_createContactsDirectoryIfNeededAtURL:(id)a0;
+ (id)accountIdentifierFromPersistentStoreURL:(id)a0;
+ (id)os_log_t;
+ (id)persistenceStackWithAccountCollection:(id)a0;
+ (id)accountIdentifierForManagedObject:(id)a0;
+ (id)persistenceStackWithInMemoryBackend;
+ (id)persistenceStackWithPersistentStoreCoordinator:(id)a0 accountCollection:(id)a1;

- (void).cxx_destruct;
- (id)initWithBackendProvider:(id /* block */)a0;
- (id)makePersistenceContext;

@end
