@class NSArray;

@interface PKWebServiceMerchantCategoryCodesFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSArray *appleCardUnsupportedMerchantCategoryCodes;
@property (readonly, copy, nonatomic) NSArray *appleCashUnsupportedMerchantCategoryCodes;

+ (id)merchantCategoryCodesFeatureWithWebService:(id)a0;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;

@end
