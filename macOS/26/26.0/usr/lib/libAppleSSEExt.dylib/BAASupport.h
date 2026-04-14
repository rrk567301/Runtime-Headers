@interface BAASupport : NSObject

+ (void)setDelegate:(id)a0;
+ (int)getCertificateExpirationDate:(double *)a0;
+ (void)initialize;
+ (int)prepareLazily;
+ (int)getCertificates:(id *)a0;
+ (void)setBlessedUser:(unsigned int)a0 keybagUUID:(unsigned char[16])a1;
+ (int)prepare;
+ (int)prepareLazily:(BOOL)a0;
+ (int)issueNewCertificate;

@end
