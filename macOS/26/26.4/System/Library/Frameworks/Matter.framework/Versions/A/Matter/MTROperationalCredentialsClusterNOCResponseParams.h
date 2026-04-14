@class NSNumber, NSString;

@interface MTROperationalCredentialsClusterNOCResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSString *debugText;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
