@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationSourceNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) char isAllDay;
@property (readonly, nonatomic) char isTimeSensitive;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) char isLocationEvent;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, copy, nonatomic) NSString *eventObjectID;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, copy, nonatomic) NSString *legacyIdentifier;
@property (readonly, copy, nonatomic) NSURL *mapItemURL;
@property (readonly, copy, nonatomic) NSURL *conferenceURL;
@property (readonly, nonatomic) char conferenceURLIsBroadcast;
@property (readonly, copy, nonatomic) NSURL *mailtoURL;
@property (readonly, nonatomic) char hasSuggestedLocation;
@property (readonly, nonatomic) char eventHasAlarms;
@property (readonly, copy, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) char isOffsetFromTravelTimeStart;
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (readonly, nonatomic) char allowsLocationAlerts;
@property (readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (readonly, nonatomic) unsigned long long travelAdvisoryTimelinessPeriod;
@property (readonly, nonatomic) char forceDisplayOfNewTravelAdvisoryHypotheses;
@property (readonly, nonatomic) char travelAdvisoryDisabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 preferredLocation:(id)a3 startDate:(id)a4 endDate:(id)a5 isAllDay:(char)a6 isTimeSensitive:(char)a7 launchURL:(id)a8 isLocationEvent:(char)a9 eventID:(id)a10 eventObjectID:(id)a11 calendarIdentifier:(id)a12 eventRepresentationDictionary:(id)a13 legacyIdentifier:(id)a14 mapItemURL:(id)a15 conferenceURL:(id)a16 conferenceURLIsBroadcast:(char)a17 mailtoURL:(id)a18 hasSuggestedLocation:(char)a19 eventHasAlarms:(char)a20 alarmID:(id)a21 isOffsetFromTravelTimeStart:(char)a22 lastFireTimeOfAlertOffsetFromTravelTime:(id)a23 allowsLocationAlerts:(char)a24 hypothesis:(id)a25 travelAdvisoryTimelinessPeriod:(unsigned long long)a26 forceDisplayOfNewTravelAdvisoryHypotheses:(char)a27 travelAdvisoryDisabled:(char)a28;

@end
