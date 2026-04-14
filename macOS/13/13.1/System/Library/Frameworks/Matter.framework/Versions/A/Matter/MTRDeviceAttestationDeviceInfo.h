@class NSData;

@interface MTRDeviceAttestationDeviceInfo : NSObject

@property (readonly, nonatomic) NSData *dacCertificate;
@property (readonly, nonatomic) NSData *dacPAICertificate;
@property (readonly, nonatomic) NSData *certificateDeclaration;

- (void).cxx_destruct;
- (id)initWithDACCertificate:(id)a0 dacPAICertificate:(id)a1 certificateDeclaration:(id)a2;

@end
