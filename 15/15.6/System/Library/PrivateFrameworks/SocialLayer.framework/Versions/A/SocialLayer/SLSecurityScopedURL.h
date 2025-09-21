@class NSURL, NSString;

@interface SLSecurityScopedURL : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic, getter=isReadonly) char readonly;
@property (copy, nonatomic) NSString *sandboxExtensionClass;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 readonly:(char)a1;
- (id)_issueSandboxExtension;
- (char)isEqualToSandboxExtendedURL:(id)a0;
- (id)initWithURL:(id)a0 extensionType:(long long)a1;

@end
