@class CNGroup;

@interface CNChangeHistoryRemoveSubgroupFromGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNGroup *subgroup;
@property (readonly, nonatomic) CNGroup *group;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithSubgroup:(id)a0 group:(id)a1;

@end
