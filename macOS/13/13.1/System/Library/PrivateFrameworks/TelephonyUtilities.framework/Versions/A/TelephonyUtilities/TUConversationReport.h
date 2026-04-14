@class NSUUID, NSDate;

@interface TUConversationReport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timebase;
@property (readonly, nonatomic) NSUUID *conversationID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConversationID:(id)a0 timebase:(id)a1;
- (BOOL)isEqualToConversationReport:(id)a0;

@end
