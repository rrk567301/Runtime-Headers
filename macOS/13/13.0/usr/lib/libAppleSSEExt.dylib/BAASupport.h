@interface BAASupport : NSObject

+ (void)initialize;
+ (void)setDelegate:(id)a0;
+ (int)prepare;
+ (int)getCertificateExpirationDate:(double *)a0;
+ (void)setBlessedUser:(unsigned int)a0 keybagUUID:(unsigned char[16])a1;
+ (int)issueNewCertificate;
+ (int)getCertificates:(id *)a0;

@end
