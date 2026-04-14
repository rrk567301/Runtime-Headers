@class NSNumber, NSString;

@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)appLaunches;
- (id)desiredOutcomeTotal;
- (id)mutableAnalyticsEventRepresentation;
- (id)notificationsPosted;
- (double)timeSinceLastNotification;
- (id)tipViewTotal;

@end
