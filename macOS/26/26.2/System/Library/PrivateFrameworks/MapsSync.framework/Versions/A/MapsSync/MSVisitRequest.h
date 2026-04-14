@class NSArray, NSString, _TtC8MapsSync13MapsSyncRange, NSError, _TtC8MapsSync20MapsSyncQueryOptions;

@interface MSVisitRequest : MapsSync.MapsSyncRequest

- (id)initWithStore:(id)a0;
- (id)init;
- (void)fetchWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (void)countWithSearchTerm:(NSString *)a0 topLevelCategories:(NSArray *)a1 regions:(NSArray *)a2 dateRanges:(NSArray *)a3 sortDescriptors:(NSArray *)a4 range:(_TtC8MapsSync13MapsSyncRange *)a5 completionHandler:(void (^)(long long, NSError *))a6;
- (id)fetchSyncAndReturnError:(id *)a0;
- (id)fetchSyncWithOptions:(id)a0 error:(id *)a1;
- (void)fetchWithSearchTerm:(NSString *)a0 topLevelCategories:(NSArray *)a1 regions:(NSArray *)a2 dateRanges:(NSArray *)a3 sortDescriptors:(NSArray *)a4 range:(_TtC8MapsSync13MapsSyncRange *)a5 completionHandler:(void (^)(NSArray *, NSError *))a6;

@end
