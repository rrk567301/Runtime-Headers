@interface ATXRootOfAppData : NSObject

- (id)init;
- (id)initInternal;
- (void)recordDocFreqWithBundleId:(id)a0 hasAction:(id)a1;
- (void)recordSessionWithBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0;
- (unsigned long long)sessionCountForBundleId:(id)a0 firstAction:(id)a1;

@end
