@interface SKDTestProcessor : SKDRecordProcessor

- (id)initWithName:(id)a0;
- (id)requiredAttributes;
- (id)optionalAttributes;
- (id)processRecord:(id)a0 bundleID:(id)a1;
- (id)processedAttributes;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1;

@end
