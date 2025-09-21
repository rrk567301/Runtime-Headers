@class NSArray, NSError, _TtC8MapsSync20MapsSyncQueryOptions;

@interface MSIncidentReportRequest : MapsSync.MapsSyncRequest

- (id)initWithStore:(id)a0;
- (id)init;
- (void)fetchWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (id)fetchSyncAndReturnError:(id *)a0;
- (id)fetchSyncWithOptions:(id)a0 error:(id *)a1;

@end
