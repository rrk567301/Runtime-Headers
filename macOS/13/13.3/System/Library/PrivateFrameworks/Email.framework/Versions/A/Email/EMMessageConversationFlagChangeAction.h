@class NSArray;

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction

@property (readonly, nonatomic) long long conversationNotificationLevel;
@property (copy, nonatomic) NSArray *conversationIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithConversationIDs:(id)a0 conversationNotificationLevel:(long long)a1;

@end
