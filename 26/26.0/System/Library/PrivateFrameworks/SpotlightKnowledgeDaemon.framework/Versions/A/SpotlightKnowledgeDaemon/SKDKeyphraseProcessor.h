@class SKGSystemListener;

@interface SKDKeyphraseProcessor : SKDRecordProcessor {
    SKGSystemListener *_listener;
}

@property (readonly, nonatomic) SKGSystemListener *listener;

- (void)load;
- (id)init;
- (id)requiredAttributes;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;
- (id)optionalAttributes;
- (unsigned long long)maxEntityCount;
- (id)processRecord:(id)a0 bundleID:(id)a1;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1;

@end
