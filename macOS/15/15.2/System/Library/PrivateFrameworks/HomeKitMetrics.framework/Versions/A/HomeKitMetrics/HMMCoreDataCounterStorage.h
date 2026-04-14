@class NSPersistentContainer, NSManagedObjectContext, NSString;

@interface HMMCoreDataCounterStorage : NSObject

@property (readonly, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) NSManagedObjectContext *currentContext;
@property (readonly, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSString *path;

- (void).cxx_destruct;
- (void)save;
- (BOOL)loadPersistentStoreWithError:(id *)a0;
- (void)executeWithManagedObjectContext:(id /* block */)a0;
- (void)executeWithManagedObjectContextAndWait:(id /* block */)a0;
- (id)initWithModelName:(id)a0 atPath:(id)a1;

@end
