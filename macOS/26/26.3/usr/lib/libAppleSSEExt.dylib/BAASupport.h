@interface BAASupport : NSObject

+ (void)initialize;
+ (void)setDelegate:(id)a0;
+ (int)prepareLazily:(BOOL)a0;
+ (int)prepare;
+ (int)getCertificates:(id *)a0;
+ (int)getCertificateExpirationDate:(double *)a0;
+ (int)issueNewCertificate;
+ (int)prepareLazily;
+ (void)setBlessedUser:(unsigned int)a0 keybagUUID:(unsigned char[16])a1;

@end
