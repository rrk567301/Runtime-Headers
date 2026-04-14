@class NSString;

@interface CNChangeHistoryDifferentMeCardEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) NSString *contactIdentifier;

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
- (id)initWithContactIdentifier:(id)a0;

@end
