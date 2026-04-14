@interface TIKeyboardInputManagerTransliteration_ar : TIKeyboardInputManagerTransliteration

+ (id)arabicPrefixes;
+ (id)rtlMarkExcludedClientIdentifiers;

- (void)addInput:(id)a0 withContext:(id)a1;
- (void)handleSpaceDeletionWithContext:(id)a0;
- (void)addRtlMark:(id)a0;
- (void)removeRtlMark:(id)a0;
- (BOOL)shouldExcludeRtlMarkHandling;

@end
