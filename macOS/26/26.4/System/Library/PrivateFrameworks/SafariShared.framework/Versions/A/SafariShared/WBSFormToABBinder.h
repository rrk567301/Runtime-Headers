@interface WBSFormToABBinder : NSObject

+ (struct array<const DFAData *, 4UL> { struct DFAData *x0[4]; })addressBookFieldLabelPatternMatchers;
+ (id)allSynonymsForMatch:(id)a0 formAppearsToBeChinese:(BOOL)a1;
+ (const struct DFAData { unsigned short *x0; unsigned long long x1; } *)emailFieldLabelPatternMatchers;
+ (unsigned long long)indexOfBestMatchForString:(id)a0 inArray:(id)a1 startingPosition:(unsigned long long *)a2;
+ (id)specifierForAutocompleteToken:(id)a0;
+ (id)specifierForClassification:(id)a0 hints:(id)a1 orderedParts:(id)a2;
+ (id)specifierForIndex:(unsigned int)a0;
+ (id)specifierForLabel:(id)a0;

@end
