@class NSString, _TtC25CloudSubscriptionFeatures12TicketStatus;

@interface CloudSubscriptionFeatures.TicketStatus : NSObject <NSSecureCoding> {
    void /* function */ rawValue;
    void /* unknown type, empty encoding */ allowedValues;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *notYetQueued;
@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *enqueued;
@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *active;

@property (nonatomic, copy) NSString *rawValue;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
