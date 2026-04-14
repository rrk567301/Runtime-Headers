@class WFLibraryWorkflowsQuery;

@interface WFCoherenceDatabaseWorkflowsResult : WFDatabaseResult

@property (readonly, nonatomic) WFLibraryWorkflowsQuery *libraryQuery;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDatabase:(id)a0 libraryQuery:(id)a1;

@end
