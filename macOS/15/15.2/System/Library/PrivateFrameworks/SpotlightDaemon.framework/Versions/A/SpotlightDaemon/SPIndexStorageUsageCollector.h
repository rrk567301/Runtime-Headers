@class NSDictionary, NSMutableDictionary;

@interface SPIndexStorageUsageCollector : NSObject {
    NSMutableDictionary *_visitedInodes;
    NSMutableDictionary *_storageUsage;
}

@property BOOL canceled;
@property (readonly, nonatomic) NSDictionary *storageUsage;

- (id)init;
- (void).cxx_destruct;
- (BOOL)collectAtPath:(id)a0;
- (void)sendToCoreAnalyticsWithLiveDocCount:(unsigned long long)a0 deadDocCount:(unsigned long long)a1;

@end
