@class CNContact;

@interface CNChangeHistoryUpdateContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) BOOL imagesChanged;
@property (readonly, nonatomic) CNContact *contact;

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
- (id)initWithContact:(id)a0 imagesChanged:(BOOL)a1;

@end
