@class NSArray, NSDictionary;

@interface WBSCRDTPosition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sortValues;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (long long)_nextRandomIndexBasedOnIndex:(long long)a0 upToIndex:(long long)a1;
+ (long long)_nextRandomIndexBasedOnIndex:(long long)a0 withMaximumIncrement:(long long)a1;
+ (long long)_randomIndexWithLowerBound:(long long)a0 upperBound:(long long)a1;
+ (id)positionBetweenPosition:(id)a0 andPosition:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSortValue:(id)a0 parentSortValues:(id)a1;
- (id)initWithSortValues:(id)a0;

@end
