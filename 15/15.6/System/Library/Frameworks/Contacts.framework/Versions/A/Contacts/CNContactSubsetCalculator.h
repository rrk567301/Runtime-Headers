@interface CNContactSubsetCalculator : NSObject

+ (char)_isLabel:(id)a0 subsumableIntoLabel:(id)a1 equivalencies:(id)a2;
+ (char)_isLabeledValue:(id)a0 availableInLabeledValues:(id)a1 claimedIndices:(id)a2 forMultiValueProperty:(id)a3;
+ (char)isContact:(id)a0 subsetOfContact:(id)a1 forMultiValueProperty:(id)a2;
+ (char)isContact:(id)a0 subsetOfContact:(id)a1 forSingleValueProperty:(id)a2;
+ (char)isContact:(id)a0 subsetOfContact:(id)a1 ignoringProperties:(id)a2;

@end
