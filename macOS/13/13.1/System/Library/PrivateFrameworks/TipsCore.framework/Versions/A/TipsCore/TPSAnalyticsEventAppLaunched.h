@class NSNumber, NSString;

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {
    BOOL _needsSessionReset;
}

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSNumber *launchNumber;
@property (readonly, nonatomic) NSString *userType;
@property (retain, nonatomic) NSString *launchType;

+ (BOOL)supportsSecureCoding;
+ (void)resetLaunchNumber;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 launchType:(id)a3;
+ (id)firstLaunchEvent;
+ (id)_currentSessionEvents;
+ (id)_initialSessionEvent;
+ (id)_latestSessionEvent;
+ (void)appSessionEndedWithType:(id)a0;
+ (id)lastRecordedLaunchType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)eventName;
- (void)log;
- (void)setDataProvider:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void)persistKeys;
- (void)_aggregateLog;
- (id)userTypeString;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 launchType:(id)a3;
- (id)_initFirstLaunchEvent;
- (void)_updateLaunchCount;

@end
