@class NSUUID, NSString, TUConversationParticipant, TUConversationActivitySession, NSURL;

@interface TUConversationActivityEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *sessionUUID;
@property (retain, nonatomic) TUConversationParticipant *originator;
@property (nonatomic) long long type;
@property (nonatomic) long long queueItemType;
@property (retain, nonatomic) NSString *item;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) TUConversationActivitySession *session;
@property (retain, nonatomic) NSURL *url;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionUUID:(id)a0 originator:(id)a1 type:(long long)a2;
- (char)isEqualToConversationActivityEvent:(id)a0;

@end
