@class CalStoreRemoteManagedGroup;

@interface CalStoreRemoteManagedCalendar : CalStoreRemoteManagedNode

@property (retain, nonatomic) CalStoreRemoteManagedGroup *group;
@property (nonatomic) BOOL isEventContainer;
@property (nonatomic) BOOL isTaskContainer;
@property (nonatomic) BOOL shouldShowInPrimaryAccounts;

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)a0;

- (id)description;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLocal;
- (id)saveWithError:(id *)a0;
- (BOOL)removeWithError:(id *)a0;
- (BOOL)hasCapability:(int)a0;

@end
