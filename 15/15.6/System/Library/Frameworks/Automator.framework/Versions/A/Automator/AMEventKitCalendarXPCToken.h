@class NSString;

@interface AMEventKitCalendarXPCToken : AMXPCToken

@property (retain) NSString *calendarIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCalendar:(id)a0;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
