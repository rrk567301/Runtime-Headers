@class NSString;

@interface AVB17221AECPMilanVendorGetMilanInfoResponse : AVB17221AECPMilanVendorMessage

@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) char redundancy;
@property (nonatomic) unsigned int certificationVersion;
@property (readonly, copy, nonatomic) NSString *certificationVersionString;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingCertificationVersion;
+ (id)keyPathsForValuesAffectingCertificationVersionString;
+ (id)keyPathsForValuesAffectingProtocolVersion;
+ (id)keyPathsForValuesAffectingRedundancy;

- (id)init;
- (unsigned int)protocolVersion;
- (void)setProtocolVersion:(unsigned int)a0;
- (unsigned int)certificationVersion;
- (id)certificationVersionString;
- (char)redundancy;
- (void)setCertificationVersion:(unsigned int)a0;
- (void)setRedundancy:(char)a0;

@end
