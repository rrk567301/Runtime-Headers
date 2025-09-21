@class NSArray;

@interface LNCompoundPropertyQuery : LNPropertyQuery

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *comparisons;

+ (char)supportsSecureCoding;
+ (id)andComparisons:(id)a0;
+ (id)orComparisons:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 comparisons:(id)a1;

@end
