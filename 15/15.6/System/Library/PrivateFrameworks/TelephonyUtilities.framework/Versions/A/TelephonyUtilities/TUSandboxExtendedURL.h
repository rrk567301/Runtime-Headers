@class NSURL, NSString;

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *sandboxExtensionClass;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 withExtensionType:(long long)a1;
- (char)isEqualToSandboxExtendedURL:(id)a0;

@end
