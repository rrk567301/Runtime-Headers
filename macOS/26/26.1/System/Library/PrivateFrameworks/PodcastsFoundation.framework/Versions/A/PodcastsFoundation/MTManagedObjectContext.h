@class NSString, PFDatabaseHangDetector;

@interface MTManagedObjectContext : NSManagedObjectContext

@property (nonatomic) long long type;
@property (nonatomic) BOOL isResetable;
@property (readonly, nonatomic) NSString *mt_immutableName;
@property (retain, nonatomic) PFDatabaseHangDetector *hangDetector;

- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void)performBlock:(id /* block */)a0;
- (id)existingObjectWithID:(id)a0 error:(id *)a1;
- (void)insertObject:(id)a0;
- (void)deleteObject:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)name;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (id)objectWithID:(id)a0;
- (id)objectRegisteredForID:(id)a0;
- (BOOL)_isInternalCoreDataQueue;
- (BOOL)handleError:(id *)a0 withCallback:(id /* block */)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0 name:(id)a1;
- (void)validateConcurencyType;
- (void)validatePodcastDeletion:(id)a0;

@end
