@class NSData;

@interface SiriAnalyticsXPCMessageEnvelope : NSObject <NSSecureCoding> {
    void /* function */ payload;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long eventTypeId;
@property (nonatomic, readonly) NSData *payload;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEventTypeId:(long long)a0 payload:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
