@class NSNumber;

@interface MTRTLSClientManagementClusterProvisionEndpointResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *endpointID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned short x0; } *)a0;
- (id)initWithDecodableStruct:(const struct DecodableType { unsigned short x0; } *)a0;

@end
