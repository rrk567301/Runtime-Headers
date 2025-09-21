@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group;
@property (readonly) char update;
@property (readonly) char migration;
@property (copy, nonatomic) id /* block */ fetchResult;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 update:(char)a1 migration:(char)a2 fetchResult:(id /* block */)a3;
- (id)mainReturningError;

@end
