@class NSDate, NSString, NSArray, NSURL, NSData, EKStructuredLocation, NSTimeZone, EKSuggestedEventInfo, EKCalendar;

@interface EKAutocompleteSearchResult : NSObject

@property (readonly, nonatomic) NSString *descriptionForDebugging;
@property (readonly, nonatomic) unsigned long long source;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) char allDay;
@property (retain, nonatomic) EKStructuredLocation *structuredLocation;
@property (retain, nonatomic) EKStructuredLocation *clientLocation;
@property (readonly) EKStructuredLocation *preferredLocation;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) EKCalendar *calendar;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) EKStructuredLocation *travelStartLocation;
@property (retain, nonatomic) EKSuggestedEventInfo *suggestionInfo;
@property (nonatomic) long long privacyLevel;
@property (nonatomic) long long availability;
@property (retain, nonatomic) NSData *localStructuredData;
@property (readonly, nonatomic) char isReminder;
@property (nonatomic) struct CGColor { } *calendarColor;
@property (retain, nonatomic) NSString *foundInBundleID;
@property (retain, nonatomic) NSString *displayLocation;
@property (retain, nonatomic) NSString *displayLocationWithoutPrediction;
@property (retain, nonatomic) NSArray *pasteboardResults;
@property (nonatomic) char approximateTime;

+ (id)_copyAlarmsForAutocompleteFromResult:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSource:(unsigned long long)a0;
- (id)_attendeesForSuggestedEventFromAttendees:(id)a0;
- (id)eventRepresentingSelf;
- (char)isDifferentEnoughFromInitialEvent:(id)a0 consideringTimeProperties:(char)a1;
- (void)updateEventFromSelf:(id)a0 updateTimeProperties:(char)a1 updateTravelTimeProperties:(char)a2 updateMode:(unsigned long long)a3 overrideCalendar:(id)a4;
- (void)updateSelfFromEvent:(id)a0;

@end
