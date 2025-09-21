@class NSString, NSDate;

@interface SGConversationTurn : NSObject <NSSecureCoding, NSCopying, SGConversationTurnProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *senderID;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 senderID:(id)a1 timestamp:(id)a2;
- (char)isEqualToConversationTurn:(id)a0;

@end
