@class NSSet, NSPredicate;

@interface WFContextualActionFilteringBehavior : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *matchingTypes;
@property (readonly, nonatomic) NSPredicate *filesPredicate;
@property (readonly, nonatomic) NSPredicate *thoroughFilteringPredicate;

+ (id)matchAllFiles;
+ (id)filteringWithMatchingTypes:(id)a0 predicate:(id)a1;
+ (id)filteringWithMatchingTypes:(id)a0 predicate:(id)a1 thoroughFilteringPredicate:(id)a2;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMatchingTypes:(id)a0 filesPredicate:(id)a1 thoroughFilteringPredicate:(id)a2;

@end
