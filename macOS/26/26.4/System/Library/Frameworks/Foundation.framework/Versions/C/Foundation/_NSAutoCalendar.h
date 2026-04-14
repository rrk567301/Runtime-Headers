@interface _NSAutoCalendar : NSCalendar

+ (BOOL)supportsSecureCoding;

- (id)initWithCalendarIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
