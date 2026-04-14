@class NSString;

@interface WBClientBundleInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSString *executable;
@property (readonly) NSString *version;
@property (readonly) NSString *name;
@property (readonly) NSString *shortVersion;

- (id)init;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
