@interface BAASupport : NSObject

+ (void)initialize;
+ (int)issueNewCertificate;
+ (int)prepareLazily;
+ (int)getCertificateExpirationDate:(double *)a0;
+ (int)getCertificates:(id *)a0;
+ (void)setBlessedUser:(unsigned int)a0 keybagUUID:(unsigned char[16])a1;
+ (void)setDelegate:(id)a0;
+ (int)prepareLazily:(BOOL)a0;
+ (int)prepare;

@end
