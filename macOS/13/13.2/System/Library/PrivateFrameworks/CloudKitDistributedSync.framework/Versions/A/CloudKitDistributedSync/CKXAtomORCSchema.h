@protocol CKXORCHelpers;

@interface CKXAtomORCSchema : NSObject <CKXORCHelpers>

@property (readonly, nonatomic) id<CKXORCHelpers> implementation;

- (void).cxx_destruct;
- (id)generateSchema;
- (void)configureColumnsWithRootColumn:(void *)a0;
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)a0;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)a0;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)a0;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)a0;
- (id)initWithBinding:(id)a0 formatVersion:(unsigned char)a1;

@end
