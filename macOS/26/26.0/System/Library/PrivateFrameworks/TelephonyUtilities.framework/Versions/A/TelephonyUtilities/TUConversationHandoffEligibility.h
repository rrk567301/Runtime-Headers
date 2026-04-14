@class NSUUID, TUConversationParticipantAssociation, NSString;

@interface TUConversationHandoffEligibility : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEligible) BOOL eligible;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
@property (nonatomic, getter=isSendingVideo) BOOL sendingVideo;
@property (retain, nonatomic) NSUUID *conversationGroupUUID;
@property (retain, nonatomic) TUConversationParticipantAssociation *association;
@property (retain, nonatomic) NSString *originatingDeviceType;
@property (readonly, nonatomic) NSString *localizedDeviceCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandoffEligibility:(id)a0;
- (BOOL)isEqualToHandoffEligibility:(id)a0;

@end
