@class NSNumber, NSArray;

@interface MTRThermostatClusterAtomicResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSArray *attributeStatus;
@property (copy, nonatomic) NSNumber *timeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
