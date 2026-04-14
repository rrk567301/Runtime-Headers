@class NSString;

@interface AKRemoteViewServiceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *hostBundleID;
@property (copy, nonatomic) NSString *hostSceneID;

+ (id)defaultConfiguration;
+ (id)configurationForHostWithBundleID:(id)a0 sceneID:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
