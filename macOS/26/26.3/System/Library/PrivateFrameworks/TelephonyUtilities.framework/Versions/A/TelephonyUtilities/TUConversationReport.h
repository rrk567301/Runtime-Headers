@class NSUUID, NSDate;

@interface TUConversationReport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timebase;
@property (readonly, nonatomic) NSUUID *conversationID;
@property (readonly, nonatomic) NSUUID *paddingForHashedValue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hashForParticipantIdentifier:(unsigned long long)a0;
- (id)initWithConversationID:(id)a0 padding:(id)a1 timebase:(id)a2;
- (BOOL)isEqualToConversationReport:(id)a0;

@end
