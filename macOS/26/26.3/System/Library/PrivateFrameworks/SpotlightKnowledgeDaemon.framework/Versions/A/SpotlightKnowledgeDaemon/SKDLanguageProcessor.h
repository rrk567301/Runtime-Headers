@class SKGLanguageIdentifier, SKGSystemListener;

@interface SKDLanguageProcessor : SKDRecordProcessor {
    SKGLanguageIdentifier *_langIdentifier;
    SKGSystemListener *_listener;
}

@property (readonly, nonatomic) SKGLanguageIdentifier *languageIdentifier;
@property (readonly, nonatomic) SKGSystemListener *listener;

- (void)load;
- (id)init;
- (id)requiredAttributes;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (id)initWithLanguageIdentifier:(id)a0 listener:(id)a1;
- (id)processRecord:(id)a0 bundleID:(id)a1;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1;

@end
