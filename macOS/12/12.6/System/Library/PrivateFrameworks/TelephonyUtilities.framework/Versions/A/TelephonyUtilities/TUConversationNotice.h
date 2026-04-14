@class NSUUID, NSString, NSURL, TUConversationActivitySession;

@interface TUConversationNotice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) long long sessionEventType;
@property (retain, nonatomic) NSURL *actionURL;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *item;
@property (nonatomic) long long queueItemType;
@property (retain, nonatomic) TUConversationActivitySession *session;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (BOOL)isEqualToConversationNotice:(id)a0;

@end
