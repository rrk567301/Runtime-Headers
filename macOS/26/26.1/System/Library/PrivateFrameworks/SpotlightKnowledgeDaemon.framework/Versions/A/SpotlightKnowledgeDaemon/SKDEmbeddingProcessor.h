@class SKGProcessor;

@interface SKDEmbeddingProcessor : SKDRecordProcessor {
    SKGProcessor *_processor;
}

- (void)load;
- (void).cxx_destruct;
- (id)requiredAttributes;
- (id)init;
- (id)optionalAttributes;
- (id)initWithProcessor:(id)a0;
- (id)processRecord:(id)a0 bundleID:(id)a1;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1;

@end
