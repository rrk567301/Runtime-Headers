@class NSString, NSNumber;

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {
    BOOL _needsSessionReset;
}

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSNumber *launchNumber;
@property (readonly, nonatomic) NSString *userType;
@property (retain, nonatomic) NSString *launchType;

+ (BOOL)supportsSecureCoding;
+ (id)_currentSessionEvents;
+ (id)_initialSessionEvent;
+ (id)_latestSessionEvent;
+ (void)appSessionEndedWithType:(id)a0;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 launchType:(id)a3;
+ (id)firstLaunchEvent;
+ (id)lastRecordedLaunchType;
+ (void)resetLaunchNumber;

- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_aggregateLog;
- (id)_initFirstLaunchEvent;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 launchType:(id)a3;
- (void)_updateLaunchCount;
- (void)persistKeys;
- (id)userTypeString;

@end
