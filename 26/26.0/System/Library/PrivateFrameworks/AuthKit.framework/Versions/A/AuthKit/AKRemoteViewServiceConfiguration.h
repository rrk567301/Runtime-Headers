@class NSString;

@interface AKRemoteViewServiceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *hostBundleID;
@property (copy, nonatomic) NSString *hostSceneID;
@property (copy, nonatomic) NSString *remoteBundleID;
@property (copy, nonatomic) NSString *remoteClassName;

+ (id)defaultConfiguration;
+ (id)configurationForHostWithBundleID:(id)a0 sceneID:(id)a1;
+ (id)configurationForHostWithBundleID:(id)a0 sceneID:(id)a1 remoteBundleID:(id)a2;
+ (id)configurationWithRemoteBundleID:(id)a0;
+ (id)configurationWithRemoteBundleID:(id)a0 remoteClassName:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
