@class CNContact;

@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *fromContact;
@property (readonly, nonatomic) CNContact *toContact;
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
- (id)initWithFromContact:(id)a0 toContact:(id)a1 unifiedContact:(id)a2;

@end
