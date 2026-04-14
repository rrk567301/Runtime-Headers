@class SKDTextEmbedder;

@interface SKDTextEmbeddingProcessor : SKDRecordProcessor

@property (readonly, nonatomic) SKDTextEmbedder *textEmbedder;

- (id)requiredAttributes;
- (void)unload;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (void)_processInputs:(id)a0 forUpdates:(id)a1 attribute:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (id)initWithDefaultsProvider:(id)a0 textEmbedder:(id)a1 logger:(id)a2;
- (void)processRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedAttributes;
- (BOOL)supportedRecord:(id)a0;

@end
