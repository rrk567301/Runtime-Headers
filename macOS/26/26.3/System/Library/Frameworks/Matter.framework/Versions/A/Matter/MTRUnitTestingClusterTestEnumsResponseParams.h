@class NSNumber;

@interface MTRUnitTestingClusterTestEnumsResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *arg1;
@property (copy, nonatomic) NSNumber *arg2;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned short x0; unsigned char x1; } *)a0;
- (id)initWithDecodableStruct:(const struct DecodableType { unsigned short x0; unsigned char x1; } *)a0;

@end
