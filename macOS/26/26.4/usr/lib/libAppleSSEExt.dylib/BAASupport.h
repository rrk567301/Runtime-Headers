@interface BAASupport : NSObject

+ (int)prepare;
+ (void)initialize;
+ (int)getCertificateExpirationDate:(double *)a0;
+ (int)prepareLazily;
+ (int)getCertificates:(id *)a0;
+ (void)setBlessedUser:(unsigned int)a0 keybagUUID:(unsigned char[16])a1;
+ (int)prepareLazily:(BOOL)a0;
+ (void)setDelegate:(id)a0;
+ (int)issueNewCertificate;

@end
