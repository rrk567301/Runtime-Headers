@class CNContact;

@interface CNChangeHistoryPreferredContactForNameEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *preferredContact;
@property (readonly, nonatomic) CNContact *unifiedContact;

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
- (id)initWithPreferredContact:(id)a0 unifiedContact:(id)a1;

@end
