@class CNGroup, CNContact;

@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *member;
@property (readonly, nonatomic) CNGroup *group;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithMember:(id)a0 group:(id)a1;

@end
