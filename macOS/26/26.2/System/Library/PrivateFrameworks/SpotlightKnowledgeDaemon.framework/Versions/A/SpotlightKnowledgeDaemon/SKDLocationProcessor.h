@class SKGSystemListener, SKGDataDetector;

@interface SKDLocationProcessor : SKDRecordProcessor {
    SKGDataDetector *_detector;
    SKGSystemListener *_listener;
}

@property (readonly, nonatomic) SKGDataDetector *detector;
@property (readonly, nonatomic) SKGSystemListener *listener;

- (void)load;
- (void).cxx_destruct;
- (id)init;
- (id)requiredAttributes;
- (id)optionalAttributes;
- (unsigned long long)maxEntityCount;
- (id)initWithDataDetector:(id)a0 listener:(id)a1;
- (id)processRecord:(id)a0 bundleID:(id)a1;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1;

@end
