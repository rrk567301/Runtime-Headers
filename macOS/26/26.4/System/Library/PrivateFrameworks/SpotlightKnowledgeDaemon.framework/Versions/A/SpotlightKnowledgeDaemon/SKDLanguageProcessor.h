@class SKGLanguageIdentifier, SKGSystemListener;

@interface SKDLanguageProcessor : SKDRecordProcessor {
    SKGLanguageIdentifier *_langIdentifier;
    SKGSystemListener *_listener;
}

@property (readonly, nonatomic) SKGLanguageIdentifier *languageIdentifier;
@property (readonly, nonatomic) SKGSystemListener *listener;

- (id)requiredAttributes;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (id)initWithDefaultsProvider:(id)a0 listener:(id)a1 languageIdentifier:(id)a2 logger:(id)a3;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (id)processRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;

@end
