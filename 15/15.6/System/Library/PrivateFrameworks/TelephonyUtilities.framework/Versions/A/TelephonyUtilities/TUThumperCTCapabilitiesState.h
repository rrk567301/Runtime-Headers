@class NSSet, NSString;

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isApproved) char approved;
@property (copy, nonatomic) NSSet *approvedSecondaryDeviceIDs;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic, getter=isAssociated) char associated;
@property (copy, nonatomic) NSString *localDeviceID;
@property (nonatomic) char supportsDefaultPairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapabilityInfo:(id)a0;
- (char)isEqualToCapabilitiesState:(id)a0;
- (id)publiclyAccessibleCopy;

@end
