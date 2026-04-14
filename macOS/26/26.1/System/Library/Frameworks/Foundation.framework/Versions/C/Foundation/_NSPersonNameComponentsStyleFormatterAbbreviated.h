@interface _NSPersonNameComponentsStyleFormatterAbbreviated : _NSPersonNameComponentsStyleFormatter

- (id)_formattedStringFromOrderedKeys:(id)a0 components:(id)a1 attributesByRange:(id)a2;
- (BOOL)shouldIgnoreComponentsContainingSpecialCharacters;
- (id)keysOfInterest;
- (id)abbreviatedKeys;
- (id)_delimiterBetweenString:(id)a0 andString:(id)a1 isPhonetic:(BOOL)a2;
- (id)fallbackStyleFormatter;

@end
