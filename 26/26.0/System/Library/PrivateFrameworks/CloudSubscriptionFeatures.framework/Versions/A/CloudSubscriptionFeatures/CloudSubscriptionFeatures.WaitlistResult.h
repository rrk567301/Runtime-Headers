@class NSString, NSArray, _TtC25CloudSubscriptionFeatures12TicketStatus;

@interface CloudSubscriptionFeatures.WaitlistResult : NSObject <NSSecureCoding> {
    void /* function */ ticket;
    void /* function */ featureIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *ticket;
@property (nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *status;
@property (nonatomic, readonly) NSArray *featureIDs;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTicket:(id)a0 status:(id)a1 featureIDs:(id)a2;

@end
