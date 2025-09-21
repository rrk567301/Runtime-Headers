@class NSString;

@interface AMEventKitCalendarXPCToken : AMXPCToken

@property (retain) NSString *calendarIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCalendar:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
