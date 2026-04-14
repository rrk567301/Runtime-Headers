@class NSString, CNContact;

@interface CNChangeHistoryAddContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *containerIdentifier;

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
- (id)contactIdentifiers;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithContact:(id)a0 contactIdentifier:(id)a1 containerIdentifier:(id)a2;
- (id)initWithContact:(id)a0 containerIdentifier:(id)a1;
- (id)initWithContactIdentifier:(id)a0 containerIdentifier:(id)a1;

@end
