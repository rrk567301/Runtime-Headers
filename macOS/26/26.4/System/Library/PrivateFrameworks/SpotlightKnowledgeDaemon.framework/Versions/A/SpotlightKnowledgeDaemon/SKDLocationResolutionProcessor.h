@class SKDLocationResolution, SKDDataDetector;

@interface SKDLocationResolutionProcessor : SKDRecordProcessor

@property (readonly, nonatomic) SKDDataDetector *dataDetector;
@property (readonly, nonatomic) SKDLocationResolution *locationResolution;

- (id)requiredAttributes;
- (void)unload;
- (void)load;
- (void).cxx_destruct;
- (id)optionalAttributes;
- (id)initWithDefaultsProvider:(id)a0 dataDetector:(id)a1 locationResolution:(id)a2 logger:(id)a3;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (void)processRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedAttributes;
- (BOOL)supportedRecord:(id)a0;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;

@end
