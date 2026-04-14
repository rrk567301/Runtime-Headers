@class HMBShareInvitationContext, NSURL, HMBCloudZoneID, NSDate, CKDeviceToDeviceShareInvitationToken;

@interface HMBShareInvitation : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) CKDeviceToDeviceShareInvitationToken *token;
@property (readonly, nonatomic) HMBShareInvitationContext *context;
@property (readonly, nonatomic) HMBCloudZoneID *cloudZoneID;
@property (readonly, nonatomic) NSDate *dateCreated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 token:(id)a1 context:(id)a2 cloudZoneID:(id)a3;
- (id)initWithURL:(id)a0 token:(id)a1 context:(id)a2 cloudZoneID:(id)a3 dateCreated:(id)a4;

@end
