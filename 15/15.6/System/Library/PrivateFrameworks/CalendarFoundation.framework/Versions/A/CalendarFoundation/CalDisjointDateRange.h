@class NSMutableSet;

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSMutableSet *distinctRanges;

+ (id)disjointRangeWithDistinctRanges:(id)a0;
+ (id)disjointRangeWithSingleRange:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsDate:(id)a0;
- (id)addRange:(id)a0;
- (char)containsRange:(id)a0;
- (double)totalDuration;
- (id)addDisjointRange:(id)a0;
- (id)initWithDistinctRanges:(id)a0;
- (id)intersectionWithDisjointRange:(id)a0;
- (id)intersectionWithRange:(id)a0;
- (char)intersectsRange:(id)a0;
- (id)sortedDistinctRanges;
- (id)subtractDisjointRange:(id)a0;
- (id)subtractRange:(id)a0;

@end
