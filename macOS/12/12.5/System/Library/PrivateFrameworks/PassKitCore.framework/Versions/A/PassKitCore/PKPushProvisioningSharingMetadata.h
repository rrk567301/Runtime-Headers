@class NSString;

@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sharingInstanceIdentifier;
@property (copy, nonatomic) NSString *provisioningCredentialHash;
@property (nonatomic) unsigned long long sharingStatus;
@property (nonatomic) long long source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToEncryptedProvisioningTarget:(id)a0;

@end
