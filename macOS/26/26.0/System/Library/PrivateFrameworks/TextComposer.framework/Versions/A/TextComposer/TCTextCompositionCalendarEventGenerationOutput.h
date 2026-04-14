@class NSString, NSDictionary, NSArray, NSDate;

@interface TCTextCompositionCalendarEventGenerationOutput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *eventTitle;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, copy) NSDictionary *options;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSString *notes;
@property (readonly, copy, nonatomic) NSArray *notesBullets;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, copy, nonatomic) NSString *recurrenceRule;
@property (readonly, nonatomic) float duration;
@property (readonly, copy, nonatomic) NSString *startDateString;
@property (readonly, copy, nonatomic) NSString *startTimeString;
@property (readonly, copy, nonatomic) NSString *endDateString;
@property (readonly, copy, nonatomic) NSString *endTimeString;
@property (readonly, copy, nonatomic) NSString *startDateTZ;
@property (readonly, copy, nonatomic) NSString *endDateTZ;
@property (readonly, nonatomic) float fuzzyDuration;
@property (readonly, copy, nonatomic) NSString *fuzzyStartDateString;
@property (readonly, copy, nonatomic) NSString *fuzzyStartTimeString;
@property (readonly, copy, nonatomic) NSString *fuzzyEndDateString;
@property (readonly, copy, nonatomic) NSString *fuzzyEndTimeString;
@property (readonly, copy, nonatomic) NSString *fuzzyStartDateBound;
@property (readonly, copy, nonatomic) NSString *fuzzyEndDateBound;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventTitle:(id)a0 location:(id)a1 allDay:(BOOL)a2 participants:(id)a3 recurrenceRule:(id)a4 duration:(float)a5 startDateString:(id)a6 startTimeString:(id)a7 endDateString:(id)a8 endTimeString:(id)a9 startDateTZ:(id)a10 endDateTZ:(id)a11 fuzzyDuration:(float)a12 fuzzyStartDateString:(id)a13 fuzzyStartTimeString:(id)a14 fuzzyEndDateString:(id)a15 fuzzyEndTimeString:(id)a16 options:(id)a17;
- (id)initWithEventTitle:(id)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 notes:(id)a4 notesBullets:(id)a5 allDay:(BOOL)a6 options:(id)a7;
- (id)initWithEventTitle:(id)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 notes:(id)a4 notesBullets:(id)a5 allDay:(BOOL)a6 participants:(id)a7 recurrenceRule:(id)a8 duration:(float)a9 startDateString:(id)a10 startTimeString:(id)a11 endDateString:(id)a12 endTimeString:(id)a13 startDateTZ:(id)a14 endDateTZ:(id)a15 fuzzyDuration:(float)a16 fuzzyStartDateString:(id)a17 fuzzyStartTimeString:(id)a18 fuzzyEndDateString:(id)a19 fuzzyEndTimeString:(id)a20 fuzzyStartDateBound:(id)a21 fuzzyEndDateBound:(id)a22 options:(id)a23;
- (id)initWithEventTitle:(id)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 notes:(id)a4 notesBullets:(id)a5 allDay:(BOOL)a6 participants:(id)a7 recurrenceRule:(id)a8 fuzzyStartDateBound:(id)a9 fuzzyEndDateBound:(id)a10 fuzzyDuration:(float)a11 startDateTZ:(id)a12 endDateTZ:(id)a13 options:(id)a14;
- (id)initWithEventTitle:(id)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 notes:(id)a4 notesBullets:(id)a5 options:(id)a6;
- (id)initWithEventTitle:(id)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 notes:(id)a4 options:(id)a5;

@end
