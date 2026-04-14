@class NSString;

@interface FCColor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) NSString *hex;

+ (id)clearColor;
+ (id)nullableColorWithHexString:(id)a0;
+ (id)whiteColor;
+ (id)colorWithHexString:(id)a0;
+ (id)blackColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

- (unsigned long long)hash;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)legibleColor;
- (BOOL)isSimilarToColor:(id)a0 withinPercentage:(double)a1;
- (void)readDeconstructedRepresentationWithAcccessor:(id /* block */)a0;

@end
