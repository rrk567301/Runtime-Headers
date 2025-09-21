@class CKFrameworkFingerprint;

@interface CKProcessScopedMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned int clientSDKVersion;
@property (copy, nonatomic) CKFrameworkFingerprint *frameworkFingerprint;
@property (nonatomic) char isClientMainBundleAppleExecutable;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
