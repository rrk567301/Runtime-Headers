@class NSString, NSArray, CLSEKParticipant, NSDate, CLSEKCalendar, CLLocation;

@interface CLSEKEvent : NSObject <NSCoding>

@property (readonly) NSString *calendarItemIdentifier;
@property (readonly) NSString *title;
@property (readonly) char isBirthday;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly, getter=isAllDay) char allDay;
@property (readonly) char hasAttendees;
@property (readonly) NSArray *attendees;
@property (readonly) char organizedByMe;
@property (readonly) CLSEKParticipant *selfAttendee;
@property (readonly) CLSEKCalendar *calendar;
@property (readonly) char hasRecurrenceRules;
@property (readonly) CLLocation *geoLocation;
@property (readonly) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly) char isSuggestedAndAccepted;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEKEvent:(id)a0;

@end
