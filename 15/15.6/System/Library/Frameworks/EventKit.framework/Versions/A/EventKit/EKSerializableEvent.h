@class NSDate, NSString, NSArray, NSURL, EKSerializableStructuredLocation, NSTimeZone, EKSerializableParticipant, NSNumber;

@interface EKSerializableEvent : EKSerializableObject

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) char isAllDay;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) NSArray *recurrenceRules;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *calendarIdentifier;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) EKSerializableStructuredLocation *structuredLocation;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) EKSerializableParticipant *selfAttendee;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSNumber *isNew;

+ (id)classesForKey;
+ (id)serializedProperties;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (void)_initAlarms:(id)a0;
- (void)_initAttachments:(id)a0;
- (void)_initAttendees:(id)a0 selfAttendee:(id)a1;
- (void)_initRecurrenceRule:(id)a0;
- (id)createEventInEventStore:(id)a0;

@end
