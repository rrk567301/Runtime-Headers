@class NSPersistentContainer, NSURL;

@interface DNDSCoreDataBackingStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _setupLock;
    NSPersistentContainer *_persistentContainer;
    NSURL *_testDatabaseURL;
}

- (void).cxx_destruct;
- (id)newManagedObjectContext;
- (id)_initWithURL:(id)a0;
- (void)setupPersistentStoreIfNeeded;

@end
