@class NSNumber;

@interface MTRGeneralCommissioningClusterSetTCAcknowledgementsResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *errorCode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned char x0; } *)a0;
- (id)initWithDecodableStruct:(const struct DecodableType { unsigned char x0; } *)a0;

@end
