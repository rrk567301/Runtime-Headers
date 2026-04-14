@class NSString;

@interface AVB17221AECPMilanVendorGetMilanInfoResponse : AVB17221AECPMilanVendorMessage

@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) BOOL redundancy;
@property (nonatomic) unsigned int certificationVersion;
@property (readonly, copy, nonatomic) NSString *certificationVersionString;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingCertificationVersion;
+ (id)keyPathsForValuesAffectingCertificationVersionString;
+ (id)keyPathsForValuesAffectingProtocolVersion;
+ (id)keyPathsForValuesAffectingRedundancy;

- (void)setProtocolVersion:(unsigned int)a0;
- (unsigned int)protocolVersion;
- (id)init;
- (BOOL)redundancy;
- (void)setRedundancy:(BOOL)a0;
- (unsigned int)certificationVersion;
- (id)certificationVersionString;
- (void)setCertificationVersion:(unsigned int)a0;

@end
