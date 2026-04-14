@class NSString;

@interface AXMDataPointValue : NSObject <NSCopying>

@property (nonatomic) double number;
@property (copy, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL isEmptyValue;

+ (id)valueWithNumber:(double)a0;
+ (id)valueWithCategory:(id)a0;
+ (id)emptyValue;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setIsEmptyValue:(BOOL)a0;

@end
