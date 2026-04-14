@class NSSet, NSPredicate;

@interface WFContextualActionFilteringBehavior : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) WFContextualActionFilteringBehavior *matchAllFiles;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *matchingTypes;
@property (readonly, nonatomic) NSPredicate *inClientPredicate;
@property (readonly, nonatomic) NSPredicate *daemonPredicate;

+ (id)filteringWithMatchingTypes:(id)a0 predicate:(id)a1;
+ (id)filteringWithMatchingTypes:(id)a0 predicate:(id)a1 daemonPredicate:(id)a2;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMatchingTypes:(id)a0 inClientPredicate:(id)a1 daemonPredicate:(id)a2;

@end
