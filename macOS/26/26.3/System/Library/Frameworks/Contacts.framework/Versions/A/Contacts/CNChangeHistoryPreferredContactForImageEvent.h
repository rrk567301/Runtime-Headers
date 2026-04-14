@class CNContact;

@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *preferredContact;
@property (readonly, nonatomic) CNContact *unifiedContact;

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
- (id)initWithPreferredContact:(id)a0 unifiedContact:(id)a1;

@end
