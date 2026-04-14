@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPCSData:(id)a0 encryptedPrivateKey:(id)a1;
- (void).cxx_destruct;

@end
