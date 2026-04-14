@class NSString, NSDictionary;

@interface IASignalAnalyticsObject : IAXPCObject

@property (retain, nonatomic) NSString *channelName;
@property (retain, nonatomic) NSString *signalName;
@property (retain, nonatomic) NSString *analyticsSessionIdString;
@property (retain, nonatomic) NSDictionary *payload;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)creationTimestampWithFallback;
- (id)initWithChannel:(id)a0 signal:(id)a1 sessionIdString:(id)a2 creationTimestamp:(id)a3 payload:(id)a4;
- (id)initWithChannel:(id)a0 signal:(id)a1 sessionIdString:(id)a2 payload:(id)a3;
- (id)obtainPayloadValueSafelyForKey:(id)a0 expectedClass:(Class)a1;

@end
