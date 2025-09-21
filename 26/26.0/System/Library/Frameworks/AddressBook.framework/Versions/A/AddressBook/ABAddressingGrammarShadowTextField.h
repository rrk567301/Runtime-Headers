@class NSArray;

@interface ABAddressingGrammarShadowTextField : ABShadowTextField

@property (retain, nonatomic) NSArray *addressingGrammars;

- (void)setEditable:(BOOL)a0;
- (void).cxx_destruct;
- (id)displayStringValueForAddressingGrammarLabeledValues:(id)a0;
- (id)labeledValuesFromMultiValue:(id)a0;
- (void)setAddressingGrammarsCardMultiValue:(id)a0;

@end
