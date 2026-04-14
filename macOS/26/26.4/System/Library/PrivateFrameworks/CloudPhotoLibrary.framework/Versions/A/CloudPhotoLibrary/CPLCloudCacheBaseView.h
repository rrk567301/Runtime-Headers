@class CPLEngineCloudCache;

@interface CPLCloudCacheBaseView : CPLRecordStorageView

@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache;
@property (readonly, nonatomic) BOOL useFinal;

- (id)recordViewsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (void).cxx_destruct;
- (id)description;
- (id)redactedDescription;
- (id)recordViewWithScopedIdentifier:(id)a0;
- (id)initWithCloudCache:(id)a0 useFinal:(BOOL)a1;

@end
