@class NSString, PKExpressPassInformation;

@interface PKExpressPassConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) PKExpressPassInformation *passInformation;
@property (readonly, nonatomic) BOOL isNFCExpressEnabled;
@property (readonly, nonatomic) BOOL isUWBExpressEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initForPaymentPass:(id)a0 isNFCExpressEnabled:(BOOL)a1 isUWBExpressEnabled:(BOOL)a2 withTechologyTest:(id /* block */)a3;
- (id)initWithPassInformation:(id)a0 forPaymentApplications:(id)a1;
- (id)initWithPassInformation:(id)a0 forSecureElementPass:(id)a1;
- (id)initWithPassInformation:(id)a0 isNFCExpressEnabled:(BOOL)a1 isUWBExpressEnabled:(BOOL)a2;

@end
