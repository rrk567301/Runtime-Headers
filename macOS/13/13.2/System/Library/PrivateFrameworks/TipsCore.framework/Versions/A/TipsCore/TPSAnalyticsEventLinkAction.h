@class NSString;

@interface TPSAnalyticsEventLinkAction : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSString *actionDirection;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 actionName:(id)a1 actionDirection:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithTipID:(id)a0 actionName:(id)a1 actionDirection:(id)a2;

@end
