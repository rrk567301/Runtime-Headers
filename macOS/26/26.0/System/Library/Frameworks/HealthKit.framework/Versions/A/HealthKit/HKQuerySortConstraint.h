@class NSComparisonPredicate, NSSortDescriptor;

@interface HKQuerySortConstraint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSortDescriptor *sortDescriptor;
@property (readonly, copy, nonatomic) NSComparisonPredicate *predicate;

+ (id)sortConstraintByRelaxingSortConstraint:(id)a0 error:(id *)a1;
+ (id)sortConstraintWithSortDescriptor:(id)a0 predicate:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSortDescriptor:(id)a0 predicate:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)canRelax;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
