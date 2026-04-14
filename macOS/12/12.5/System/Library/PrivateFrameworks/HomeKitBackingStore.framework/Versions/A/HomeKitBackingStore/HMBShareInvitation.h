@class HMBShareInvitationContext, NSURL, HMBCloudZoneID, NSDate, CKDeviceToDeviceShareInvitationToken;

@interface HMBShareInvitation : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) CKDeviceToDeviceShareInvitationToken *token;
@property (readonly, nonatomic) HMBShareInvitationContext *context;
@property (readonly, nonatomic) HMBCloudZoneID *cloudZoneID;
@property (readonly, nonatomic) NSDate *dateCreated;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithURL:(id)a0 token:(id)a1 context:(id)a2 cloudZoneID:(id)a3 dateCreated:(id)a4;
- (id)initWithURL:(id)a0 token:(id)a1 context:(id)a2 cloudZoneID:(id)a3;

@end
