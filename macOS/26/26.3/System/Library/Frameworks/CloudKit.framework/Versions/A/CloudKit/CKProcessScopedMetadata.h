@class CKFrameworkFingerprint;

@interface CKProcessScopedMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientSDKVersion;
@property (copy, nonatomic) CKFrameworkFingerprint *frameworkFingerprint;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
