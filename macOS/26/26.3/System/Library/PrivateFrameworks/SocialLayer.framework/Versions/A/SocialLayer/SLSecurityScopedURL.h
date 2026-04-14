@class NSURL, NSString;

@interface SLSecurityScopedURL : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *sandboxExtensionClass;

- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1;
- (id)_issueSandboxExtension;
- (BOOL)isEqualToSandboxExtendedURL:(id)a0;
- (id)initWithURL:(id)a0 extensionType:(long long)a1;

@end
