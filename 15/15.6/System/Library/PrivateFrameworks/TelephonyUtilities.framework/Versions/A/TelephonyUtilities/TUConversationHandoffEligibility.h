@class NSUUID, TUConversationParticipantAssociation, NSString;

@interface TUConversationHandoffEligibility : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isEligible) char eligible;
@property (nonatomic, getter=isUplinkMuted) char uplinkMuted;
@property (nonatomic, getter=isSendingVideo) char sendingVideo;
@property (retain, nonatomic) NSUUID *conversationGroupUUID;
@property (retain, nonatomic) TUConversationParticipantAssociation *association;
@property (retain, nonatomic) NSString *originatingDeviceType;
@property (readonly, nonatomic) NSString *localizedDeviceCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandoffEligibility:(id)a0;
- (char)isEqualToHandoffEligibility:(id)a0;

@end
