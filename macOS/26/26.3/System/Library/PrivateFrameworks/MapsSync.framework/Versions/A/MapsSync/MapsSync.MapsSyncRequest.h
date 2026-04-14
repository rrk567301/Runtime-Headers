@class NSArray, NSDictionary, NSError, _TtC8MapsSync20MapsSyncQueryOptions, _TtC8MapsSync30MapsSyncDictionaryQueryOptions;

@interface MapsSync.MapsSyncRequest : NSObject {
    void /* unknown type, empty encoding */ _store;
    void /* unknown type, empty encoding */ _type;
}

- (id)init;
- (void).cxx_destruct;
- (void)batchDeleteWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)batchUpdateWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)a0 propertiesToUpdate:(NSDictionary *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)countWithCompletionHandler:(void (^)(long long, NSError *))a0;
- (void)countWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)a0 completionHandler:(void (^)(long long, NSError *))a1;
- (void)fetchPropertiesWithOptions:(_TtC8MapsSync30MapsSyncDictionaryQueryOptions *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;

@end
