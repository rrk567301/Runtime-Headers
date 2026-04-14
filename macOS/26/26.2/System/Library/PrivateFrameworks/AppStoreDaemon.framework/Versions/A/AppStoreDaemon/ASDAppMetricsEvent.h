@class NSNumber, NSDictionary;

@interface ASDAppMetricsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long eventSubtype;
@property (copy) NSNumber *eventTime;
@property long long eventType;
@property (getter=isPosted) BOOL posted;
@property (copy) NSDictionary *payload;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
