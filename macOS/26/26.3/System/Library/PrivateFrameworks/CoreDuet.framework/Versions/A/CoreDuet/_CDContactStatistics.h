@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long outgoingRecipientCount;
@property unsigned long long incomingSenderCount;
@property unsigned long long incomingRecipientCount;
@property (copy, nonatomic) NSDate *lastOutgoingRecipientDate;
@property (copy, nonatomic) NSDate *lastIncomingSenderDate;
@property (copy, nonatomic) NSDate *lastIncomingRecipientDate;
@property (copy, nonatomic) NSDate *firstOutgoingRecipientDate;
@property (copy, nonatomic) NSDate *firstIncomingSenderDate;
@property (copy, nonatomic) NSDate *firstIncomingRecipientDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)firstDate:(id)a0 updatedWith:(id)a1;
- (id)firstInteractionDate;
- (double)incomingRecipientTimeInterval;
- (double)incomingSenderTimeInterval;
- (unsigned long long)interactionCount;
- (double)interactionTimeInterval;
- (BOOL)isEqualToContactStatistics:(id)a0;
- (id)lastDate:(id)a0 updatedWith:(id)a1;
- (id)lastInteractionDate;
- (double)outgoingRecipientTimeInterval;
- (void)updateWithStatistics:(id)a0;

@end
