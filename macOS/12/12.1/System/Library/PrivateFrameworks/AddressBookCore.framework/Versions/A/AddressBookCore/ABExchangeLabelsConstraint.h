@interface ABExchangeLabelsConstraint : ABLabelsConstraint

+ (id)phoneLabels;
+ (id)emailLabels;
+ (id)addressLabels;
+ (id)instantMessageLabels;
+ (id)relatedNamesLabels;
+ (id)urlLabels;
+ (id)otherDatesLabels;
+ (id)makePhoneLabels;
+ (id)makeInstantMessageLabels;
+ (id)makeAddressLabels;
+ (id)makeRelatedNamesLabels;
+ (id)unsupportedProperties;
+ (id)propertyToValidLabelsDictionary;
+ (id)propertyToInitialLabelDictionary;

- (id)initialLabelsForProperty:(id)a0;
- (BOOL)isPropertySupported:(id)a0;
- (BOOL)isLabelSupported:(id)a0 forProperty:(id)a1;
- (id)availableLabelsForProperty:(id)a0 activeLabels:(id)a1;
- (BOOL)customLabelsSupported;

@end
