@class NSString, PKExpressPassInformation;

@interface PKExpressPassConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) PKExpressPassInformation *passInformation;
@property (readonly, nonatomic) char isNFCExpressEnabled;
@property (readonly, nonatomic) char isUWBExpressEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForPaymentPass:(id)a0 isNFCExpressEnabled:(char)a1 isUWBExpressEnabled:(char)a2 withTechologyTest:(id /* block */)a3;
- (id)initWithPassInformation:(id)a0 forPaymentApplications:(id)a1;
- (id)initWithPassInformation:(id)a0 forSecureElementPass:(id)a1;
- (id)initWithPassInformation:(id)a0 isNFCExpressEnabled:(char)a1 isUWBExpressEnabled:(char)a2;

@end
