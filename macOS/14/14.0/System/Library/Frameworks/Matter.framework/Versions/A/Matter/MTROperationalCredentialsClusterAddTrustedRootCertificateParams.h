@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterAddTrustedRootCertificateParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *rootCertificate;
@property (copy, nonatomic) NSData *rootCACertificate;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
