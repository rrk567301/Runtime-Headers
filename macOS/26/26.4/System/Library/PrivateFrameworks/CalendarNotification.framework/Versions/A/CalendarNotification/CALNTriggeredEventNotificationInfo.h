@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation;

@interface CALNTriggeredEventNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isTimeSensitive;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, copy, nonatomic) NSString *eventOccurrenceID;
@property (readonly, copy, nonatomic) NSString *eventObjectID;
@property (readonly, copy, nonatomic) NSString *appEntityIdentifier;
@property (readonly, copy, nonatomic) NSString *organizerPhoneNumber;
@property (readonly, copy, nonatomic) NSString *organizerEmailAddress;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, copy, nonatomic) NSString *legacyIdentifier;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (readonly, copy, nonatomic) NSURL *conferenceURL;
@property (readonly, nonatomic) BOOL conferenceURLIsBroadcast;
@property (readonly, copy, nonatomic) NSURL *mailtoURL;
@property (readonly, nonatomic) BOOL hasSuggestedLocation;
@property (readonly, nonatomic) BOOL eventHasAlarms;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;
@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property (readonly, nonatomic) BOOL travelAdvisoryDisabled;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 startDate:(id)a3 endDate:(id)a4 isAllDay:(BOOL)a5 isTimeSensitive:(BOOL)a6 eventID:(id)a7 eventOccurrenceID:(id)a8 eventObjectID:(id)a9 appEntityIdentifier:(id)a10 organizerPhoneNumber:(id)a11 organizerEmailAddress:(id)a12 calendarIdentifier:(id)a13 eventRepresentationDictionary:(id)a14 legacyIdentifier:(id)a15 preferredLocation:(id)a16 conferenceURL:(id)a17 conferenceURLIsBroadcast:(BOOL)a18 mailtoURL:(id)a19 hasSuggestedLocation:(BOOL)a20 eventHasAlarms:(BOOL)a21 allowsLocationAlerts:(BOOL)a22 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)a23 travelAdvisoryDisabled:(BOOL)a24;

@end
