@class NSString;

@interface SKAChannelEncodingKey : NSObject

@property (class, nonatomic, readonly) NSString *channelIdentifier;
@property (class, nonatomic, readonly) NSString *dateInvitationCreated;
@property (class, nonatomic, readonly) NSString *statusTypeIdentifier;
@property (class, nonatomic, readonly) NSString *incomingRatchetState;
@property (class, nonatomic, readonly) NSString *invitationPayload;
@property (class, nonatomic, readonly) NSString *presenceIdentifier;
@property (class, nonatomic, readonly) NSString *channelToken;
@property (class, nonatomic, readonly) NSString *channelServerKeyData;
@property (class, nonatomic, readonly) NSString *channelPeerKeyData;
@property (class, nonatomic, readonly) NSString *channelMembershipKeyData;
@property (class, nonatomic, readonly) NSString *channelCreationDate;
@property (class, nonatomic, readonly) NSString *channelIsPersonalPresence;
@property (class, nonatomic, readonly) NSString *serviceIdentifier;
@property (class, nonatomic, readonly) NSString *versionNumber;

- (void).cxx_destruct;
- (id)init;

@end
