@class NSString;

@interface SKGBundleStatus : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long processedCount;
@property (nonatomic) unsigned long long needProcessCount;
@property (nonatomic) unsigned long long needEmbedCount;
@property (nonatomic) unsigned long long awaitingRedonationCount;
@property (nonatomic) unsigned long long itemsRedonationRequestCapReachedCount;
@property (nonatomic) unsigned long long primaryEmbeddingCount;
@property (nonatomic) unsigned long long secondaryEmbeddingCount;
@property (nonatomic) unsigned long long needSuggestedEventsCount;
@property (nonatomic) unsigned long long suggestedEventsCount;
@property (nonatomic) unsigned long long needDocumentUnderstandingCount;
@property (nonatomic) unsigned long long documentUnderstandingCount;
@property (nonatomic) unsigned long long needKeyphrasesCount;
@property (nonatomic) unsigned long long keyphrasesCount;
@property (nonatomic) unsigned long long breadcrumbsCount;
@property (nonatomic) unsigned long long locationsCount;
@property (retain, nonatomic) NSString *bundleQuery;
@property (retain, nonatomic) NSString *bundleFileQuery;

- (id)init;
- (void).cxx_destruct;

@end
