@class HMDCloudZoneID, NSURL, NSDate, HMDShareInvitationContext, CKDeviceToDeviceShareInvitationToken;

@interface HMDShareInvitation : HMFObject <NSCopying>

@property (readonly, copy) NSURL *shareURL;
@property (readonly, copy) CKDeviceToDeviceShareInvitationToken *token;
@property (readonly) HMDShareInvitationContext *context;
@property (readonly) HMDCloudZoneID *cloudZoneID;
@property (readonly, copy) NSDate *dateCreated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithHMBShareInvitation:(id)a0;
- (id)initWithKeyedArchivedData:(id)a0 error:(id *)a1;
- (id)initWithShareURL:(id)a0 token:(id)a1 context:(id)a2 cloudZoneID:(id)a3 dateCreated:(id)a4;
- (id)keyedArchivedDataWithError:(id *)a0;

@end
