@class NSNumber, NSData;

@interface MTROperationalCredentialsClusterSignVIDVerificationResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSNumber *fabricBindingVersion;
@property (copy, nonatomic) NSData *signature;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
