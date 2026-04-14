@class NSNumber;

@interface MTRUnitTestingClusterTestNullableOptionalResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *wasPresent;
@property (copy, nonatomic) NSNumber *wasNull;
@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *originalValue;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
