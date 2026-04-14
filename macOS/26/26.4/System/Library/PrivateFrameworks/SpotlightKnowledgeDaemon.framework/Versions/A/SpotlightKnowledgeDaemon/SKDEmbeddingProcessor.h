@class SKGProcessor;

@interface SKDEmbeddingProcessor : SKDRecordProcessor {
    SKGProcessor *_processor;
}

- (id)requiredAttributes;
- (void)unload;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (id)getEmbeddingWithCache:(id)a0 key:(id)a1 bundleID:(id)a2;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (id)initWithDefaultsProvider:(id)a0 processor:(id)a1 logger:(id)a2;
- (id)processRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;
- (id)processedAttributes;
- (void)storeEmbeddingWithCache:(id)a0 key:(id)a1 attributeSet:(id)a2 bundleID:(id)a3;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;

@end
