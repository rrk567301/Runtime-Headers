@class NSString, NSArray, NSDate;

@interface SFCertificateManager : NSObject

@property (nonatomic) struct __SecTrust { } *trust;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *issuerName;
@property (readonly, nonatomic) NSDate *expiration;
@property (readonly, nonatomic) NSString *hostName;
@property (readonly, nonatomic) char isRoot;
@property (readonly, nonatomic) NSArray *certificates;
@property (readonly, nonatomic) char isQWAC;
@property (readonly, nonatomic) char isValid;

+ (char)isQwacStatementEnabled;

- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (id)expirationDateForCertificate:(struct __SecCertificate { } *)a0;
- (char)isRootCertificate:(struct __SecCertificate { } *)a0;
- (id)issuerNameForCertificate:(struct __SecCertificate { } *)a0;
- (id)titleForCertificate:(struct __SecCertificate { } *)a0;

@end
