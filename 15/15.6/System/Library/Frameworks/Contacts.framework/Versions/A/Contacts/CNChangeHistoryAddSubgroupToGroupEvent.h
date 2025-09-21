@class CNGroup;

@interface CNChangeHistoryAddSubgroupToGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNGroup *subgroup;
@property (readonly, nonatomic) CNGroup *group;

+ (char)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithSubgroup:(id)a0 group:(id)a1;

@end
