@class NSString;

@interface AMEventKitCalendarItemXPCToken : AMXPCToken

@property (retain) NSString *calendarItemIdentifier;
@property unsigned long long entityType;

+ (BOOL)supportsSecureCoding;
+ (id)eventStoreForConversionForEntityType:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCalendarItem:(id)a0;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
