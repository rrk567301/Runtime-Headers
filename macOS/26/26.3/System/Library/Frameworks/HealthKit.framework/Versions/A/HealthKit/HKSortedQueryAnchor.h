@class NSNumber, NSArray;

@interface HKSortedQueryAnchor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *objectID;
@property (readonly, copy, nonatomic) NSArray *sortConstraints;

+ (id)sortConstraintsWithSortDescriptors:(id)a0 sample:(id)a1;
+ (id)sortedQueryAnchorRelaxingConstraintsWithAnchor:(id)a0 error:(id *)a1;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)a0;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)a0 followingSample:(id)a1 objectID:(long long)a2;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)a0 includingSample:(id)a1 objectID:(long long)a2;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)a0 objectID:(long long)a1;

- (id)initWithSortConstraints:(id)a0 objectID:(id)a1;
- (id)init;
- (BOOL)isCompatibleWithSortDescriptors:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (BOOL)canRelax;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)querySortDescriptors;

@end
