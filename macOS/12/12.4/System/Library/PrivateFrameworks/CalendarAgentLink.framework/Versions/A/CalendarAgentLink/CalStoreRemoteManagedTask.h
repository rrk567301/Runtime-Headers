@class NSDate;

@interface CalStoreRemoteManagedTask : CalStoreRemoteManagedCalendarItem

@property (retain, nonatomic) NSDate *completedDate;
@property (retain, nonatomic) NSDate *dueDate;
@property (nonatomic) int priority;

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)a0 inCalendars:(id)a1;
+ (id)fetchObjectsWithSharedUID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)saveWithError:(id *)a0;
- (BOOL)removeWithError:(id *)a0;

@end
