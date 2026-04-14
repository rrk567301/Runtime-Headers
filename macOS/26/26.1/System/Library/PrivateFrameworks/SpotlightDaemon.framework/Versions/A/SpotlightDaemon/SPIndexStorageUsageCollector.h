@class NSDictionary, NSMutableDictionary;

@interface SPIndexStorageUsageCollector : NSObject {
    NSMutableDictionary *_visitedInodes;
    NSMutableDictionary *_storageUsage;
}

@property BOOL canceled;
@property (readonly, nonatomic) NSDictionary *storageUsage;

- (void).cxx_destruct;
- (id)init;
- (void)collectAtPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendToCoreAnalyticsWithLiveDocCount:(unsigned long long)a0 deadDocCount:(unsigned long long)a1;

@end
