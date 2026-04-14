@class _PASLock;

@interface ATXBehavioralPredictionsFeatureCache : NSObject {
    _PASLock *_lock;
}

- (void)addItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[828]; float x3; BOOL x4; BOOL x5; })a0 forBundleId:(id)a1;
- (void).cxx_destruct;
- (struct ATXPredictionItem { id x0; unsigned long long x1; float x2[828]; float x3; BOOL x4; BOOL x5; })itemForBundleId:(id)a0;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct { struct ATXPredictionItem *x0; } x2; })itemsForBundleIds:(id)a0;
- (id)init;

@end
