@class NSString;

@interface LACClientInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *binaryPath;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *displayName;

+ (id)emptyClientInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 binaryPath:(id)a1 displayName:(id)a2;
- (id)initWithBundleId:(id)a0 displayName:(id)a1;

@end
