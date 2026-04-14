@class SKDDataDetector;

@interface SKDDataDetectorsProcessor : SKDRecordProcessor

@property (readonly, nonatomic) SKDDataDetector *dataDetector;

- (id)requiredAttributes;
- (void)unload;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (id)referenceDateForRecord:(id)a0;
- (id)initWithDefaultsProvider:(id)a0 dataDetector:(id)a1 logger:(id)a2;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (void)processRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedAttributes;
- (BOOL)supportedRecord:(id)a0;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;

@end
