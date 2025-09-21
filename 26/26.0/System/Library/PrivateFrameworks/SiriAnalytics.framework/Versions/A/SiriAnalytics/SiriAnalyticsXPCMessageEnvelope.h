@class NSData;

@interface SiriAnalyticsXPCMessageEnvelope : NSObject <NSSecureCoding> {
    void /* function */ payload;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long eventTypeId;
@property (nonatomic, readonly) NSData *payload;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithEventTypeId:(long long)a0 payload:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
