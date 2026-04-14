@class NSString, NSDate;

@interface WFShortcutSigningCertificate : NSObject

@property (nonatomic) struct __SecCertificate { } *certificate;
@property (readonly, nonatomic) NSString *commonName;
@property (readonly, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (void)dealloc;
- (id)initWithCertificateData:(id)a0;
- (struct __SecKey { } *)copyPublicKey;
- (id)generateAuthData;

@end
