@class WFLibraryCollectionsQuery;

@interface WFCoherenceDatabaseCollectionsResult : WFDatabaseResult

@property (readonly, nonatomic) WFLibraryCollectionsQuery *libraryQuery;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 libraryQuery:(id)a1;

@end
