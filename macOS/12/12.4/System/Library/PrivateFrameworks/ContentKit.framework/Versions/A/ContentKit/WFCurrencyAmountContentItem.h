@class INCurrencyAmount;

@interface WFCurrencyAmountContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) INCurrencyAmount *currencyAmount;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
