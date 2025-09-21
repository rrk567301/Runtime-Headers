@class NSURL, NSData, NSString;

@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int provisioningStatus;
@property (copy, nonatomic) NSURL *provisioningURL;
@property (copy, nonatomic) NSData *provisioningPostData;
@property (nonatomic) char canEnable;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) char canEnableRoaming;
@property (nonatomic, getter=isRoamingEnabled) char roamingEnabled;
@property (readonly, nonatomic, getter=isProvisioningURLInvalid) char provisioningURLInvalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (void)invalidateProvisioningURL;
- (id)publiclyAccessibleCopy;

@end
