@interface TIKeyboardFeatureSpecialization_bo : TIKeyboardFeatureSpecialization

- (BOOL)doesComposeText;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)internalStringToExternal:(id)a0;
- (id)externalStringToInternal:(id)a0;

@end
