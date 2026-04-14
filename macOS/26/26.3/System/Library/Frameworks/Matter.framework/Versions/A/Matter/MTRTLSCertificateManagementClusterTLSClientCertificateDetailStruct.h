@class NSNumber, NSData, NSArray;

@interface MTRTLSCertificateManagementClusterTLSClientCertificateDetailStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *ccdid;
@property (copy, nonatomic) NSData *clientCertificate;
@property (copy, nonatomic) NSArray *intermediateCertificates;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
