@class TUHandle, NSString, NSUUID, NSSet, TUConversationMember, TUConversationVirtualParticipantConfig, TUConversationUnreliableMessengerConfig;

@interface TUConversationActivitySessionContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *capabilitiesDescription;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSSet *activitySessions;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (retain, nonatomic) TUHandle *initiator;
@property (nonatomic) unsigned long long localParticipantIdentifier;
@property (copy, nonatomic) NSSet *virtualParticipants;
@property (copy, nonatomic) TUConversationVirtualParticipantConfig *virtualParticipantConfig;
@property (copy, nonatomic) TUConversationUnreliableMessengerConfig *unreliableMessengerConfig;
@property (copy, nonatomic) NSSet *activeRemoteParticipants;
@property (nonatomic) unsigned long long capabilities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToContainer:(id)a0;

@end
