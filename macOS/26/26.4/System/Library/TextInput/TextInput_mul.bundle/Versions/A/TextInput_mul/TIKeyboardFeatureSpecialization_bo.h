@interface TIKeyboardFeatureSpecialization_bo : TIKeyboardFeatureSpecialization

- (BOOL)doesComposeText;
- (id)internalStringToExternal:(id)a0;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)externalStringToInternal:(id)a0;

@end
