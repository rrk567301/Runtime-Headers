@class SKDLanguageIdentification;

@interface SKDLanguageIdentificationProcessor : SKDRecordProcessor

@property (readonly, nonatomic) SKDLanguageIdentification *languageIdentifier;

- (id)requiredAttributes;
- (void)unload;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (id)initWithDefaultsProvider:(id)a0 languageIdentifier:(id)a1 logger:(id)a2;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (void)processRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedAttributes;
- (BOOL)supportedRecord:(id)a0;

@end
