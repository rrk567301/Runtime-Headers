@interface CalStoreRemoteManagedCalDAVCalendar : CalStoreRemoteManagedCalendar

@property (nonatomic) BOOL isDelegate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
