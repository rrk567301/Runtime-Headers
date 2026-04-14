@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long outgoingRecipientCount;
@property unsigned long long incomingSenderCount;
@property unsigned long long incomingRecipientCount;
@property (retain) NSDate *lastOutgoingRecipientDate;
@property (retain) NSDate *lastIncomingSenderDate;
@property (retain) NSDate *lastIncomingRecipientDate;
@property (retain) NSDate *firstOutgoingRecipientDate;
@property (retain) NSDate *firstIncomingSenderDate;
@property (retain) NSDate *firstIncomingRecipientDate;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)firstDate:(id)a0 updatedWith:(id)a1;
- (id)lastDate:(id)a0 updatedWith:(id)a1;
- (void)updateWithStatistics:(id)a0;
- (unsigned long long)interactionCount;
- (id)firstInteractionDate;
- (id)lastInteractionDate;
- (double)interactionTimeInterval;
- (double)outgoingRecipientTimeInterval;
- (double)incomingSenderTimeInterval;
- (double)incomingRecipientTimeInterval;

@end
