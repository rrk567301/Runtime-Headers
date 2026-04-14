@class NSString;

@interface CNChangeHistoryDeleteGroupEvent : CNChangeHistoryEvent

@property (readonly, copy, nonatomic) NSString *externalURI;
@property (readonly, copy, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *groupIdentifier;

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
- (id)initWithGroupIdentifier:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithGroupIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;

@end
