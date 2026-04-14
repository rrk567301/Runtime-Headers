@class NSNumber, MTRDataTypeCurrencyStruct;

@interface MTRDataTypePriceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *amount;
@property (copy, nonatomic) MTRDataTypeCurrencyStruct *currency;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
