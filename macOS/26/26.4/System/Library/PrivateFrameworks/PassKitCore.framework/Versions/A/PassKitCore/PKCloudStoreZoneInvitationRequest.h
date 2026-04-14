@class PKSharingDestination, PKCloudStoreZoneInvitation, NSError;

@interface PKCloudStoreZoneInvitationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCloudStoreZoneInvitation *invitation;
@property (retain, nonatomic) PKSharingDestination *destination;
@property (copy, nonatomic) NSError *invitationError;

+ (id)cloudStoreZoneInvitationRequestWithProtobuf:(id)a0;
+ (id)invitationErrorWithProtobuf:(id)a0;

- (id)protobuf;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
