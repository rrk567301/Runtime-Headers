@class NSString;

@interface TPSAnalyticsEventEligibilityCheckPerformed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *error;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithError:(id)a0;

- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
