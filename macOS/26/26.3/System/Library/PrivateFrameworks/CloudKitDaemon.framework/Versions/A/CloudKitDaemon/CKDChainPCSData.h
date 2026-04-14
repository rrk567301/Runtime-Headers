@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey;

- (id)CKPropertiesDescription;
- (id)initWithPCSData:(id)a0 encryptedPrivateKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
