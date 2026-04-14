@class CNGroup;

@interface CNChangeHistoryAddSubgroupToGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNGroup *subgroup;
@property (readonly, nonatomic) CNGroup *group;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithSubgroup:(id)a0 group:(id)a1;

@end
