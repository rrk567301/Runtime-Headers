@class NSString;

@interface REMColor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *daSymbolicColorName;
@property (readonly, nonatomic) NSString *daHexString;
@property (readonly, nonatomic) NSString *ckSymbolicColorName;
@property (readonly, nonatomic) unsigned long long colorRGBSpace;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double alpha;

+ (id)blackColor;
+ (id)clearColor;
+ (id)yellowColor;
+ (id)lightGrayColor;
+ (id)blueColor;
+ (id)colorWithDictionaryData:(id)a0 error:(id *)a1;
+ (id)orangeColor;
+ (id)redColor;
+ (id)grayColor;
+ (id)cyanColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 targetRGBSpace:(unsigned long long)a4;
+ (id)whiteColor;
+ (id)greenColor;
+ (id)purpleColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)magentaColor;
+ (id)brownColor;
+ (id)colorWithHexString:(id)a0;

- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithDASymbolicColorName:(id)a0 daHexString:(id)a1;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(unsigned long long)a4 daSymbolicColorName:(id)a5 daHexString:(id)a6 ckSymbolicColorName:(id)a7;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(unsigned long long)a4;
- (id)hexString;
- (id)archivedDictionaryDataWithError:(id *)a0;
- (id)hexStringWithAlpha;
- (id)initWithHexString:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCKSymbolicColorName:(id)a0 hexString:(id)a1;
- (id)description;
- (id)initWithDASymbolicColorName:(id)a0 daHexString:(id)a1 ckSymbolicColorName:(id)a2;

@end
