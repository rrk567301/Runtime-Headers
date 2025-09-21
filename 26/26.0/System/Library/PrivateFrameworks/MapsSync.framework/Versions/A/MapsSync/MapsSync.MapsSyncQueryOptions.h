@class NSArray, _TtC8MapsSync13MapsSyncRange, _TtC8MapsSync22MapsSyncQueryPredicate;

@interface MapsSync.MapsSyncQueryOptions : NSObject {
    void /* function */ sortDescriptors;
}

@property (nonatomic, retain) _TtC8MapsSync22MapsSyncQueryPredicate *predicate;
@property (nonatomic, retain) _TtC8MapsSync13MapsSyncRange *range;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (nonatomic) BOOL notifyOnLoad;
@property (nonatomic) BOOL lazyLoad;

+ (id)restrictOptionsWithOptions:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;

- (id)initWithOptions:(id)a0;
- (id)init;
- (id)initWithPredicate:(id)a0 sortDescriptors:(id)a1 range:(id)a2;
- (void).cxx_destruct;

@end
