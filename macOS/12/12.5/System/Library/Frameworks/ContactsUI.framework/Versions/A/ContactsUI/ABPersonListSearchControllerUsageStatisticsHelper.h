@class ABPersonListSearchController;

@interface ABPersonListSearchControllerUsageStatisticsHelper : NSObject

@property unsigned long long lastSearchStringLength;
@property (weak) ABPersonListSearchController *searchController;

+ (id)helperWithSearchController:(id)a0;

- (void).cxx_destruct;
- (BOOL)shouldTraceString:(id)a0;
- (void)searchConfiguration:(id)a0 willSearchForString:(id)a1;

@end
