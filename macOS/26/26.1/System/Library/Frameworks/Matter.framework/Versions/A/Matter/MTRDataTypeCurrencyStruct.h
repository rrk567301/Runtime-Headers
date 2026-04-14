@class NSNumber;

@interface MTRDataTypeCurrencyStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *currency;
@property (copy, nonatomic) NSNumber *decimalPoints;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
