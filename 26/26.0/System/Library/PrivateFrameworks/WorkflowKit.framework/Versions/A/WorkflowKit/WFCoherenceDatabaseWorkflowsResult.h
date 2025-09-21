@class WFLibraryWorkflowsQuery;

@interface WFCoherenceDatabaseWorkflowsResult : WFDatabaseResult

@property (readonly, nonatomic) WFLibraryWorkflowsQuery *libraryQuery;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 libraryQuery:(id)a1;

@end
