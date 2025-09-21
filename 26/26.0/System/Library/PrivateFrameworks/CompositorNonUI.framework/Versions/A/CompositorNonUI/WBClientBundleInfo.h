@class NSString;

@interface WBClientBundleInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSString *executable;
@property (readonly) NSString *version;
@property (readonly) NSString *name;
@property (readonly) NSString *shortVersion;

- (id)initPrivate;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
