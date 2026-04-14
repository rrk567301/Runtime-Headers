@class NSURL, NSString;

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *sandboxExtensionClass;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)a0 withExtensionType:(long long)a1;
- (BOOL)isEqualToSandboxExtendedURL:(id)a0;

@end
