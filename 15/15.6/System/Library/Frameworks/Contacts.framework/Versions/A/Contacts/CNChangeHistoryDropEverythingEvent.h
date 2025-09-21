@interface CNChangeHistoryDropEverythingEvent : CNChangeHistoryEvent

+ (char)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptEventVisitor:(id)a0;

@end
