@class NSString, NSNumber;

@interface HAPMetricsPairVerifyEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *linkType;
@property (readonly) unsigned long long durationInMS;
@property (readonly, nonatomic) NSString *reason;

- (id)description;
- (void).cxx_destruct;
- (id)eventName;
- (id)initWithAccessory:(id)a0 forLinkType:(id)a1 durationInMS:(unsigned long long)a2 reason:(id)a3 pvError:(id)a4;
- (id)serializedEvent;

@end
