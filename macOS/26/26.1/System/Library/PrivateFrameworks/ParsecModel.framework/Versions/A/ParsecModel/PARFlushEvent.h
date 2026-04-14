@interface PARFlushEvent : PAREvent <NSFetchRequestResult>

@property (nonatomic) int type;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
