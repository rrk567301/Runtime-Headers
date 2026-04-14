@class NSURL, NSString;

@interface SLSecurityScopedURL : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *sandboxExtensionClass;

- (id)initWithURL:(id)a0 readonly:(BOOL)a1;
- (id)debugDescription;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_issueSandboxExtension;
- (BOOL)isEqualToSandboxExtendedURL:(id)a0;
- (id)initWithURL:(id)a0 extensionType:(long long)a1;

@end
