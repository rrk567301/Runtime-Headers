@class NSString, NSDate;

@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *sharingInstanceIdentifier;
@property (copy, nonatomic) NSString *provisioningCredentialHash;
@property (nonatomic) unsigned long long sharingStatus;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *credentialAuthorityIdentifier;
@property (nonatomic) unsigned long long securityOptions;
@property (readonly, nonatomic) char allowProvisioningOnLockedDevice;
@property (retain, nonatomic) NSDate *createdAt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToEncryptedProvisioningTarget:(id)a0;

@end
