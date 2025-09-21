@class WFDatabase;

@interface WFManagedObjectContext : NSManagedObjectContext

@property (weak, nonatomic) WFDatabase *database;

- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)logFaultForIncompatibleSortDescriptorsInFetchRequest:(id)a0;

@end
