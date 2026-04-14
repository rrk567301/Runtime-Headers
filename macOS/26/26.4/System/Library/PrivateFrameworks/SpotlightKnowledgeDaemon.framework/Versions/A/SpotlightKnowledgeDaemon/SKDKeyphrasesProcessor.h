@class SKDKeyphraser;

@interface SKDKeyphrasesProcessor : SKDRecordProcessor

@property (readonly, nonatomic) SKDKeyphraser *keyphraser;

- (id)requiredAttributes;
- (void)unload;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (id)initWithDefaultsProvider:(id)a0 keyphraser:(id)a1 logger:(id)a2;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (void)processRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedAttributes;
- (BOOL)supportedRecord:(id)a0;

@end
