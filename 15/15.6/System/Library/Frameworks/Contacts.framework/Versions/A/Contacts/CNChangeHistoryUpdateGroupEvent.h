@class CNGroup;

@interface CNChangeHistoryUpdateGroupEvent : CNChangeHistoryEvent

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
- (id)initWithGroup:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;

@end
