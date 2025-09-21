@class NSString;

@interface CNChangeHistoryDeleteContactEvent : CNChangeHistoryEvent

@property (readonly, copy, nonatomic) NSString *externalURI;
@property (readonly, copy, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *contactIdentifier;

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
- (id)initWithContactIdentifier:(id)a0;
- (id)initWithContactIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;

@end
