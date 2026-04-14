@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterAttestationRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *attestationNonce;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
