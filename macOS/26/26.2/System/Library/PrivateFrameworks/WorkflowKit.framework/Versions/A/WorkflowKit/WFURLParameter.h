@interface WFURLParameter : WFTextInputParameter

- (id)autocapitalizationType;
- (id)autocorrectionType;
- (id)textContentType;
- (id)keyboardType;
- (Class)singleStateClass;
- (id)rewriteParameterState:(id)a0 withStrings:(id)a1;
- (id)userVisibleStringsInParameterState:(id)a0 forUseCase:(unsigned long long)a1;

@end
