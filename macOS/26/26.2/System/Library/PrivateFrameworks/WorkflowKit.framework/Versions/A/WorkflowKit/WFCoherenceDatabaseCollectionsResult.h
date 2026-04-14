@class WFLibraryCollectionsQuery;

@interface WFCoherenceDatabaseCollectionsResult : WFDatabaseResult

@property (readonly, nonatomic) WFLibraryCollectionsQuery *libraryQuery;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDatabase:(id)a0 libraryQuery:(id)a1;

@end
