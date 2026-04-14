@class NSSet, NSArray;

@interface ASCSignpostPredicate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, copy, nonatomic) NSArray *dateRanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpans:(id)a0;
- (id)initWithTags:(id)a0 dateRanges:(id)a1;
- (id)predicateByAddingDateRange:(id)a0;
- (id)predicateByAddingTag:(unsigned long long)a0;

@end
