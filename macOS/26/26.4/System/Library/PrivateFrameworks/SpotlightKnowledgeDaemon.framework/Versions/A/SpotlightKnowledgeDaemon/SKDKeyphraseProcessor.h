@class SKGSystemListener;

@interface SKDKeyphraseProcessor : SKDRecordProcessor {
    SKGSystemListener *_listener;
}

@property (readonly, nonatomic) SKGSystemListener *listener;

- (id)requiredAttributes;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (unsigned long long)maxEntityCount;
- (id)initWithDefaultsProvider:(id)a0 listener:(id)a1 logger:(id)a2;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (id)processRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;

@end
