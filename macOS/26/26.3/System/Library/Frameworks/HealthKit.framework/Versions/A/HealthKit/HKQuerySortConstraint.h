@class NSComparisonPredicate, NSSortDescriptor;

@interface HKQuerySortConstraint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSortDescriptor *sortDescriptor;
@property (readonly, copy, nonatomic) NSComparisonPredicate *predicate;

+ (id)sortConstraintByRelaxingSortConstraint:(id)a0 error:(id *)a1;
+ (id)sortConstraintWithSortDescriptor:(id)a0 predicate:(id)a1;

- (id)description;
- (id)init;
- (id)initWithSortDescriptor:(id)a0 predicate:(id)a1;
- (void).cxx_destruct;
- (BOOL)canRelax;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
