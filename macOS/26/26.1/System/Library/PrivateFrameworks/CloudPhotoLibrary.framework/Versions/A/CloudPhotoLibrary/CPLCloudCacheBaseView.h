@class CPLEngineCloudCache;

@interface CPLCloudCacheBaseView : CPLRecordStorageView

@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache;
@property (readonly, nonatomic) BOOL useFinal;

- (id)description;
- (void).cxx_destruct;
- (id)recordViewWithScopedIdentifier:(id)a0;
- (id)recordViewsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)redactedDescription;
- (id)initWithCloudCache:(id)a0 useFinal:(BOOL)a1;

@end
