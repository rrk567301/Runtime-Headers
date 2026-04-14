@class NSNumber, MTRDataTypeCurrencyStruct;

@interface MTRDataTypePriceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *amount;
@property (copy, nonatomic) MTRDataTypeCurrencyStruct *currency;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
