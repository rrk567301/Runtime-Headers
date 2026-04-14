@class NSNumber, NSString, NSData;

@interface MTRNetworkCommissioningClusterNetworkConfigResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *networkingStatus;
@property (copy, nonatomic) NSString *debugText;
@property (copy, nonatomic) NSNumber *networkIndex;
@property (copy, nonatomic) NSData *clientIdentity;
@property (copy, nonatomic) NSData *possessionSignature;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
