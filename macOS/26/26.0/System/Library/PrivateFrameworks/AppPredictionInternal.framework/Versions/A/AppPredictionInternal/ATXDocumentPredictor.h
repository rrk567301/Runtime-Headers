@class ATXDocumentInteractionMonitor;

@interface ATXDocumentPredictor : NSObject {
    ATXDocumentInteractionMonitor *_docInteractionMonitor;
}

+ (id)sharedInstance;
+ (id)_filterToAllowedDocumentPredictionCandidates:(id)a0;
+ (unsigned int)_getATXDocumentUTTypeCategoryForContentType:(id)a0;
+ (id)_getContentTypeForFile:(id)a0;
+ (BOOL)_isAllowedDocumentPredictionCandidate:(id)a0 disabledTypes:(id)a1;
+ (id)docKeyForHistogramFromURL:(id)a0;
+ (BOOL)isAllowedDocumentPredictionCandidate:(id)a0;
+ (id)keyForDocumentCategoryFromFileURL:(id)a0;
+ (id)stringForATXDocumentUTTypeCategory:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (id)initWithAppLaunchHistogramManager:(id)a0;
- (void).cxx_destruct;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct ATXPredictionItem *x2; })featurizeDocuments:(id)a0 context:(id)a1;
- (void)handleFeedbackForOpenedDocuments:(id)a0 rejectedDocuments:(id)a1;
- (BOOL)refreshDocumentPredictionsForCandidateDocs:(id)a0 limit:(unsigned long long)a1 consumerSubType:(unsigned char)a2;
- (BOOL)refreshDocumentPredictionsForCandidateDocs:(id)a0 limit:(unsigned long long)a1 consumerSubType:(unsigned char)a2 scoreLogger:(id)a3;
- (void)scoreDocumentsWithFeatures:(void *)a0 consumerSubType:(unsigned char)a1;
- (BOOL)scoreDocumentsWithFeaturesUsingCoreML:(void *)a0 scoreLogger:(id)a1;
- (BOOL)writeScoredDocumentPredictionsToCache:(const void *)a0 limit:(unsigned long long)a1 bookmarkCache:(id)a2 consumerSubType:(unsigned char)a3;

@end
