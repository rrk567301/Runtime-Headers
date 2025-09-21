@class _PASLock;

@interface ATXBehavioralPredictionsFeatureCache : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)addItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; })a0 forBundleId:(id)a1;
- (struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; })itemForBundleId:(id)a0;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })itemsForBundleIds:(id)a0;

@end
