@class NSNumber, NSDictionary;

@interface ASDAppMetricsEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long eventSubtype;
@property (copy) NSNumber *eventTime;
@property long long eventType;
@property (getter=isPosted) char posted;
@property (copy) NSDictionary *payload;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
