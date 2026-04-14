@class NSString, NSSecurityScopedURLWrapper;

@interface STMIconConstructor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *string;
@property (retain) NSSecurityScopedURLWrapper *fileURLWrapper;
@property (readonly) long long type;

- (id)initWithBundleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageNamed:(id)a0;

@end
