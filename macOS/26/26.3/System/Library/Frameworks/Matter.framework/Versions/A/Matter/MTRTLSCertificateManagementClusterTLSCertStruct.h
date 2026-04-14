@class NSNumber, NSData;

@interface MTRTLSCertificateManagementClusterTLSCertStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *caid;
@property (copy, nonatomic) NSData *certificate;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
