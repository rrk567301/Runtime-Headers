@class CalStoreRemoteManagedEvent, NSDate;

@interface CalStoreRemoteManagedRecurrenceException : CalStoreRemoteManagedObject

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) CalStoreRemoteManagedEvent *masterEvent;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
