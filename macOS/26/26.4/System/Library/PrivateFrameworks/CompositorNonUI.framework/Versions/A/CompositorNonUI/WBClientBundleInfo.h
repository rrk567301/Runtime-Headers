@class NSString;

@interface WBClientBundleInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSString *executable;
@property (readonly) NSString *version;
@property (readonly) NSString *name;
@property (readonly) NSString *shortVersion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initPrivate;

@end
