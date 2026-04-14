@class NSString;

@interface TPSAnalyticsEventTipReadyToBeDisplayed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *correlationID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *displayType;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3 displayType:(id)a4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3 displayType:(id)a4;
- (id)mutableAnalyticsEventRepresentation;

@end
