@class PLSearchIndexCountrySynonymProvider, NSCalendar, PLUtilityAssetPool, PLSearchIndexDateFormatter, CSUSearchableKnowledgeObjectStore, NSLocale, PLSearchIndexSceneTaxonomyProvider, CSCustomAttributeKey;
@protocol PLSearchIndexingContextDelegate;

@interface PLSearchIndexingContext : NSObject

@property (readonly, weak, nonatomic) id<PLSearchIndexingContextDelegate> delegate;
@property (readonly, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (readonly, nonatomic) CSUSearchableKnowledgeObjectStore *csuTaxonomyObjectStore;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) PLSearchIndexDateFormatter *searchIndexDateFormatter;
@property (readonly, nonatomic) BOOL isSharedLibraryEnabled;
@property (readonly, nonatomic) PLUtilityAssetPool *utilityAssetPool;
@property (readonly, nonatomic) PLSearchIndexCountrySynonymProvider *countrySynonymProvider;
@property (readonly, nonatomic) CSCustomAttributeKey *photosAlbumUUIDsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosAlbumAssetCountsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosMemoryUUIDsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosMemoryAssetCountsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosHighlightUUIDsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosHighlightAssetCountsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosSensitiveLocationKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosReverseLocationDataIsValidKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosEmbeddingCountKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosThumbnailMapKey;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSceneTaxonomyProvider:(id)a0 csuTaxonomyObjectStore:(id)a1 locale:(id)a2 calendar:(id)a3 indexDateFormatter:(id)a4 countrySynonymProvider:(id)a5 delegate:(id)a6;

@end
