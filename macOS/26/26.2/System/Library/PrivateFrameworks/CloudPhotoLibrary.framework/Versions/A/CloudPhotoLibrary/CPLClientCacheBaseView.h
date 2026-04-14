@class CPLEngineCloudCache, CPLEngineStore;
@protocol CPLEngineIDMapping;

@interface CPLClientCacheBaseView : CPLRecordStorageView

@property (readonly, nonatomic) CPLEngineStore *store;
@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache;
@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;

+ (id)clientCacheBaseViewIDMappingForStore:(id)a0;

- (id)initWithStore:(id)a0;
- (id)redactedDescription;
- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)a0;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)recordViewsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (void).cxx_destruct;
- (id)recordViewWithScopedIdentifier:(id)a0;
- (id)description;

@end
