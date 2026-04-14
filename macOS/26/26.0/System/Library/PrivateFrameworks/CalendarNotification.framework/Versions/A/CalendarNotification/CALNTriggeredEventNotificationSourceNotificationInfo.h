@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationSourceNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isTimeSensitive;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BOOL isLocationEvent;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, copy, nonatomic) NSString *eventObjectID;
@property (readonly, copy, nonatomic) NSString *organizerPhoneNumber;
@property (readonly, copy, nonatomic) NSString *organizerEmailAddress;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, copy, nonatomic) NSString *legacyIdentifier;
@property (readonly, copy, nonatomic) NSURL *mapItemURL;
@property (readonly, copy, nonatomic) NSURL *conferenceURL;
@property (readonly, nonatomic) BOOL conferenceURLIsBroadcast;
@property (readonly, copy, nonatomic) NSURL *mailtoURL;
@property (readonly, nonatomic) BOOL hasSuggestedLocation;
@property (readonly, nonatomic) BOOL eventHasAlarms;
@property (readonly, copy, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart;
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;
@property (readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (readonly, nonatomic) unsigned long long travelAdvisoryTimelinessPeriod;
@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property (readonly, nonatomic) BOOL travelAdvisoryDisabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 preferredLocation:(id)a3 startDate:(id)a4 endDate:(id)a5 isAllDay:(BOOL)a6 isTimeSensitive:(BOOL)a7 launchURL:(id)a8 isLocationEvent:(BOOL)a9 eventID:(id)a10 eventObjectID:(id)a11 organizerPhoneNumber:(id)a12 organizerEmailAddress:(id)a13 calendarIdentifier:(id)a14 eventRepresentationDictionary:(id)a15 legacyIdentifier:(id)a16 mapItemURL:(id)a17 conferenceURL:(id)a18 conferenceURLIsBroadcast:(BOOL)a19 mailtoURL:(id)a20 hasSuggestedLocation:(BOOL)a21 eventHasAlarms:(BOOL)a22 alarmID:(id)a23 isOffsetFromTravelTimeStart:(BOOL)a24 lastFireTimeOfAlertOffsetFromTravelTime:(id)a25 allowsLocationAlerts:(BOOL)a26 hypothesis:(id)a27 travelAdvisoryTimelinessPeriod:(unsigned long long)a28 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)a29 travelAdvisoryDisabled:(BOOL)a30;

@end
