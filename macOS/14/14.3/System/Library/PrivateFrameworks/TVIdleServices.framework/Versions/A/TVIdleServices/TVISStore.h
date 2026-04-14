@class TVISPersistentContainer, NSObject;
@protocol OS_os_log;

@interface TVISStore : NSObject

@property (readonly, nonatomic) TVISPersistentContainer *persistentContainer;
@property (readonly, nonatomic) NSObject<OS_os_log> *storeLog;

- (void).cxx_destruct;
- (void)saveContext;
- (id)initWithPersistentContainer:(id)a0;
- (id)managedObjectContextWithError:(id *)a0;
- (BOOL)reloadPersistentStoreIfNeededWithError:(id *)a0;

@end
