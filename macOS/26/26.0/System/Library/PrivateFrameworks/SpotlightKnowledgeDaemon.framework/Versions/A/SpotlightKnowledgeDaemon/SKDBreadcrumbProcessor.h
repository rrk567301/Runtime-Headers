@class SKGSystemListener, SKGDataDetector;

@interface SKDBreadcrumbProcessor : SKDRecordProcessor {
    SKGDataDetector *_detector;
    SKGSystemListener *_listener;
}

@property (readonly, nonatomic) SKGDataDetector *detector;
@property (readonly, nonatomic) SKGSystemListener *listener;

+ (id)referenceDateFor:(id)a0;

- (void)load;
- (id)init;
- (id)requiredAttributes;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (unsigned long long)maxEntityCount;
- (id)initWithDataDetector:(id)a0 listener:(id)a1;
- (id)processRecord:(id)a0 bundleID:(id)a1;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1;

@end
