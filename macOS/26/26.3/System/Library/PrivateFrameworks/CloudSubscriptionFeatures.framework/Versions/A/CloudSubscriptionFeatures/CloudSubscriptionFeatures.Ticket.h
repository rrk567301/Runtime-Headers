@class NSString, _TtC25CloudSubscriptionFeatures12TicketStatus;

@interface CloudSubscriptionFeatures.Ticket : NSObject <NSSecureCoding> {
    void /* function */ ticket;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *ticket;
@property (nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *status;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
