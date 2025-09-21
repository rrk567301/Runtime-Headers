@interface CALNEKTTLEventTracker : NSObject <CALNTTLEventTracker>

@property (class, readonly, nonatomic) CALNEKTTLEventTracker *sharedInstance;

- (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)a0 etaType:(unsigned long long)a1 hasSuggestedLocation:(char)a2 isOnSharedCalendar:(char)a3;
- (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)a0 etaType:(unsigned long long)a1 hasSuggestedLocation:(char)a2 isOnSharedCalendar:(char)a3;
- (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)a0 transportType:(unsigned long long)a1 etaType:(unsigned long long)a2 travelState:(unsigned long long)a3 hasSuggestedLocation:(char)a4 isOnSharedCalendar:(char)a5;

@end
