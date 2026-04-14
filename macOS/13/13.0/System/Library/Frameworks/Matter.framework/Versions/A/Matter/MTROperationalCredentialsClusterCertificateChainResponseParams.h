@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterCertificateChainResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *certificate;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
