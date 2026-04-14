@class NSString, NSDateFormatter;

@interface SKDTextEmbeddingChunkProcessor : SKDRecordProcessor {
    NSDateFormatter *_dateFormatter;
    NSString *_unsupportedQuery;
}

- (void).cxx_destruct;
- (id)_dateStringFromDate:(id)a0;
- (id)optionalAttributes;
- (id)unsupportedQuery;
- (id)excludedContentTypes;
- (id)decorateTextContentWithDescription:(id)a0 isDescriptive:(BOOL)a1 delimiter:(id)a2;
- (id)excludedBundles;
- (id)_extractContentFromInternalRecord:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_extractContentFromRecord:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_extractContentFromRecordForCalendar:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_extractContentFromRecordForEvents:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_extractContentFromRecordForMail:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_extractContentFromRecordForMessages:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_extractContentFromRecordForReminders:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_extractContentFromRecordForSafari:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_extractContentFromRecordForWallet:(id)a0 maxChunkCountPtr:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)_normalizeForEmbeddingGeneration:(id)a0 context:(long long)a1;
- (id)_primaryTextForRecord:(id)a0 maxChunkCount:(unsigned long long *)a1 forUpdate:(id)a2;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (void)processRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedAttributes;

@end
