@interface CNChangeHistoryDropEverythingEvent : CNChangeHistoryEvent

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)acceptEventVisitor:(id)a0;

@end
