@class NSString, NSDictionary, NSArray, NSDate;

@interface TCTextCompositionCalendarEventGenerationOutput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *eventTitle;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSString *notes;
@property (readonly, copy) NSDictionary *options;
@property (readonly, copy, nonatomic) NSArray *notesBullets;
@property (readonly, nonatomic) char allDay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventTitle:(id)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 notes:(id)a4 notesBullets:(id)a5 allDay:(char)a6 options:(id)a7;
- (id)initWithEventTitle:(id)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 notes:(id)a4 notesBullets:(id)a5 options:(id)a6;
- (id)initWithEventTitle:(id)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 notes:(id)a4 options:(id)a5;

@end
