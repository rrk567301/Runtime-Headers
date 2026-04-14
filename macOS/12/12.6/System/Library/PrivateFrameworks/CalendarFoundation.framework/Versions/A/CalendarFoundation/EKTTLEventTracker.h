@interface EKTTLEventTracker : NSObject

+ (void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)a0 isOnSharedCalendar:(BOOL)a1;
+ (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)a0 transportType:(unsigned long long)a1 etaType:(unsigned long long)a2 travelState:(unsigned long long)a3 hasSuggestedLocation:(BOOL)a4 isOnSharedCalendar:(BOOL)a5;
+ (void)trackIsTTLEnabled:(BOOL)a0;
+ (void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)a0 transportType:(unsigned long long)a1 etaType:(unsigned long long)a2 hasSuggestedLocation:(BOOL)a3 isOnSharedCalendar:(BOOL)a4;
+ (id)_boolEnumMapping;
+ (id)_alertTypeMapping;
+ (id)_transportTypeMapping;
+ (id)_etaTypeMapping;
+ (id)_travelStateMapping;

@end
