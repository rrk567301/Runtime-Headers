@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterAttestationResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *attestationElements;
@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
