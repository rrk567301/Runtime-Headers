@class NSMutableDictionary;

@interface SPIndexStorageUsageCollector : NSObject {
    NSMutableDictionary *_visitedInodes;
    NSMutableDictionary *_storageUsage;
}

@property BOOL canceled;

- (id)init;
- (void).cxx_destruct;
- (void)collectAtPath:(id)a0;

@end
