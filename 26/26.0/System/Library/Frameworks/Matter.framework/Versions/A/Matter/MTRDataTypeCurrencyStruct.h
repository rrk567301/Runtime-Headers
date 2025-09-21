@class NSNumber;

@interface MTRDataTypeCurrencyStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *currency;
@property (copy, nonatomic) NSNumber *decimalPoints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
