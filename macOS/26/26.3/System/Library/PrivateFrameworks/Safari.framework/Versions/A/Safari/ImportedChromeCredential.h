@class NSData;

@interface ImportedChromeCredential : WBSPasswordImportedCredential

@property (readonly, copy, nonatomic) NSData *encryptedPasswordBlob;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)a0;
- (id)initWithUsername:(id)a0 encryptedPasswordBlob:(id)a1 url:(id)a2;

@end
