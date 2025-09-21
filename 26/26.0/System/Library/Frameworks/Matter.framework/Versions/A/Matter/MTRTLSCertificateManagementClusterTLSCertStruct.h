@class NSNumber, NSData;

@interface MTRTLSCertificateManagementClusterTLSCertStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *caid;
@property (copy, nonatomic) NSData *certificate;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
