@class NSString, CNContact;

@interface CNChangeHistoryUpdateContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) char imagesChanged;

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
- (id)contactIdentifiers;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithContact:(id)a0 contactIdentifier:(id)a1 imagesChanged:(char)a2;
- (id)initWithContact:(id)a0 imagesChanged:(char)a1;
- (id)initWithContactIdentifier:(id)a0 imagesChanged:(char)a1;

@end
