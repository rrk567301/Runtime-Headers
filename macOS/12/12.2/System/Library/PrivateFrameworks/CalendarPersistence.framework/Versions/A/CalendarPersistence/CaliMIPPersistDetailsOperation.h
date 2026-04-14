@class NSTimeZone, NSString, NSData, NSDate;

@interface CaliMIPPersistDetailsOperation : CaliMIPOperation

@property (retain) NSData *attachment;
@property BOOL eventIsAllDay;
@property BOOL eventIsFloating;
@property (retain) NSDate *eventStartDate;
@property (retain) NSTimeZone *eventTimeZone;
@property (retain) NSString *eventTitle;
@property (retain) NSString *organizerName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedAttendees:(id)a0;
- (id)attachmentInContext:(id)a0;

@end
