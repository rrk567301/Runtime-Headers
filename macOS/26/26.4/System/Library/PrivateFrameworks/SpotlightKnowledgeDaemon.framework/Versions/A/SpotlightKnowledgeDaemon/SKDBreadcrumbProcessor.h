@class SKGSystemListener, SKGDataDetector;

@interface SKDBreadcrumbProcessor : SKDRecordProcessor {
    SKGDataDetector *_detector;
    SKGSystemListener *_listener;
}

@property (readonly, nonatomic) SKGDataDetector *detector;
@property (readonly, nonatomic) SKGSystemListener *listener;

+ (id)referenceDateFor:(id)a0;

- (id)requiredAttributes;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (unsigned long long)maxEntityCount;
- (id)initWithDefaultsProvider:(id)a0 dataDetector:(id)a1 listener:(id)a2 logger:(id)a3;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (id)processRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;

@end
