@class NSString;

@interface TPSAnalyticsEventReplayButtonTapped : TPSAnalyticsEvent

@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;
@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 collectionID:(id)a1 correlationID:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithTipID:(id)a0 collectionID:(id)a1 correlationID:(id)a2;

@end
