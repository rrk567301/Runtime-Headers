@class NSString, NSURL;

@interface WBSPasswordImportedCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *otpAuthURL;
@property (readonly, copy, nonatomic) NSString *notesEntry;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long lineNumberFromSourceFile;

- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)a0;
- (id)initWithUser:(id)a0 password:(id)a1 url:(id)a2;
- (id)initWithUser:(id)a0 password:(id)a1 url:(id)a2 otpAuthURL:(id)a3 title:(id)a4 notesEntry:(id)a5 lineNumberFromSourceFile:(unsigned long long)a6;
- (id)urlCredentialWithPersistence:(unsigned long long)a0;

@end
