@interface SKDTestProcessor : SKDRecordProcessor

- (id)requiredAttributes;
- (id)optionalAttributes;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (id)processRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;

@end
