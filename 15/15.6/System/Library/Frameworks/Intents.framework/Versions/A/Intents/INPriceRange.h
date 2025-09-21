@class NSDecimalNumber, NSString;

@interface INPriceRange : NSObject <INPriceRangeExport, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSDecimalNumber *minimumPrice;
@property (readonly) NSDecimalNumber *maximumPrice;
@property (readonly) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_priceWithPriceRangeValue:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_formattedStringWithLocale:(id)a0 componentsFormatString:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithMaximumPrice:(id)a0 currencyCode:(id)a1;
- (id)initWithMinimumPrice:(id)a0 currencyCode:(id)a1;
- (id)initWithPrice:(id)a0 currencyCode:(id)a1;
- (id)initWithRangeBetweenPrice:(id)a0 andPrice:(id)a1 currencyCode:(id)a2;

@end
