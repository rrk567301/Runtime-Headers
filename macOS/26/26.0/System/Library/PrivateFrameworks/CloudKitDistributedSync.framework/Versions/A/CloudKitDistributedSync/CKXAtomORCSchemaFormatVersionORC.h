@class CKXAtomBindingImplementation;

@interface CKXAtomORCSchemaFormatVersionORC : NSObject <CKXORCHelpers>

@property (readonly, nonatomic) CKXAtomBindingImplementation *binding;

- (id)initWithBinding:(id)a0;
- (void).cxx_destruct;
- (void)configureColumnsWithRootColumn:(void *)a0;
- (id)generateSchema;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)a0;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)a0;
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)a0;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)a0;

@end
