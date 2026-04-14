@interface ABExchangeLabelsConstraint : ABLabelsConstraint

+ (id)propertyToInitialLabelDictionary;
+ (id)propertyToValidLabelsDictionary;
+ (id)phoneLabels;
+ (id)makePhoneLabels;
+ (id)emailLabels;
+ (id)instantMessageLabels;
+ (id)makeInstantMessageLabels;
+ (id)addressLabels;
+ (id)makeAddressLabels;
+ (id)relatedNamesLabels;
+ (id)makeRelatedNamesLabels;
+ (id)otherDatesLabels;
+ (id)urlLabels;
+ (id)unsupportedProperties;

- (BOOL)isPropertySupported:(id)a0;
- (BOOL)isLabelSupported:(id)a0 forProperty:(id)a1;
- (id)availableLabelsForProperty:(id)a0 activeLabels:(id)a1;
- (id)initialLabelsForProperty:(id)a0;
- (BOOL)customLabelsSupported;

@end
