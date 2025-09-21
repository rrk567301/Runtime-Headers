@class NSData;

@interface ImportedChromeCredential : WBSPasswordImportedCredential

@property (readonly, copy, nonatomic) NSData *encryptedPasswordBlob;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)a0;
- (id)initWithUsername:(id)a0 encryptedPasswordBlob:(id)a1 url:(id)a2;

@end
