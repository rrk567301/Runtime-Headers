@class NSNumber, NSString;

@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)notificationsPosted;
- (id)mutableAnalyticsEventRepresentation;
- (id)appLaunches;
- (id)tipViewTotal;
- (id)desiredOutcomeTotal;
- (double)timeSinceLastNotification;

@end
