@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation;

@interface CALNTriggeredEventNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) char isAllDay;
@property (readonly, nonatomic) char isTimeSensitive;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, copy, nonatomic) NSString *eventOccurrenceID;
@property (readonly, copy, nonatomic) NSString *eventObjectID;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, copy, nonatomic) NSString *legacyIdentifier;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (readonly, copy, nonatomic) NSURL *conferenceURL;
@property (readonly, nonatomic) char conferenceURLIsBroadcast;
@property (readonly, copy, nonatomic) NSURL *mailtoURL;
@property (readonly, nonatomic) char hasSuggestedLocation;
@property (readonly, nonatomic) char eventHasAlarms;
@property (readonly, nonatomic) char allowsLocationAlerts;
@property (readonly, nonatomic) char forceDisplayOfNewTravelAdvisoryHypotheses;
@property (readonly, nonatomic) char travelAdvisoryDisabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 startDate:(id)a3 endDate:(id)a4 isAllDay:(char)a5 isTimeSensitive:(char)a6 eventID:(id)a7 eventOccurrenceID:(id)a8 eventObjectID:(id)a9 calendarIdentifier:(id)a10 eventRepresentationDictionary:(id)a11 legacyIdentifier:(id)a12 preferredLocation:(id)a13 conferenceURL:(id)a14 conferenceURLIsBroadcast:(char)a15 mailtoURL:(id)a16 hasSuggestedLocation:(char)a17 eventHasAlarms:(char)a18 allowsLocationAlerts:(char)a19 forceDisplayOfNewTravelAdvisoryHypotheses:(char)a20 travelAdvisoryDisabled:(char)a21;

@end
