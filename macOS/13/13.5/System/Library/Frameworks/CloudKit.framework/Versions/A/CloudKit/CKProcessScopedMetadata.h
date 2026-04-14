@class NSDictionary, CKFrameworkFingerprint;

@interface CKProcessScopedMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientSDKVersion;
@property (copy, nonatomic) CKFrameworkFingerprint *frameworkFingerprint;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;
@property (copy, nonatomic) NSDictionary *processWideFakeEntitlements;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
