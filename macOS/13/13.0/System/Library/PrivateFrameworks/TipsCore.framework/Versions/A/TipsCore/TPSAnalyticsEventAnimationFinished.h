@class NSString;

@interface TPSAnalyticsEventAnimationFinished : TPSAnalyticsEvent

@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;
@property (readonly, nonatomic) NSString *animationSource;
@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 animationSource:(id)a1 collectionID:(id)a2 correlationID:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithTipID:(id)a0 animationSource:(id)a1 collectionID:(id)a2 correlationID:(id)a3;

@end
