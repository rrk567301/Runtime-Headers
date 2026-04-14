@interface _NSAutoCalendar : NSCalendar

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCalendarIdentifier:(id)a0;

@end
