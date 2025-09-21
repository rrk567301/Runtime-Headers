@class NSString, NSURL, TUCTCapabilityInfo, NSData;

@interface TUCTCapabilitiesState : NSObject <NSCopying, TUPubliclyAccessibleCopying, TUSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) TUCTCapabilityInfo *ctCapabilityInfo;
@property (nonatomic) int provisioningStatus;
@property (copy, nonatomic) NSURL *provisioningURL;
@property (nonatomic, getter=isProvisioningURLInvalid) char provisioningURLInvalid;
@property (copy, nonatomic) NSData *provisioningPostData;
@property (nonatomic, getter=isSupported) char supported;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isCurrentlyAvailable) char currentlyAvailable;
@property (nonatomic, getter=isRoamingSupported) char roamingSupported;
@property (nonatomic, getter=isRoamingEnabled) char roamingEnabled;
@property (nonatomic, getter=isEmergencySupported) char emergencySupported;
@property (nonatomic, getter=isEmergencyCurrentlyAvailable) char emergencyCurrentlyAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithCapabilityInfo:(id)a0;
- (void)invalidateProvisioningURL;
- (char)isEqualToCapabilitiesState:(id)a0;
- (id)publiclyAccessibleCopy;

@end
