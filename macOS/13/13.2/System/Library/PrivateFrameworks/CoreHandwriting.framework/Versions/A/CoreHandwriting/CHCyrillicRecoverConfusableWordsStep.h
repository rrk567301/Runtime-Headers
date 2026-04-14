@interface CHCyrillicRecoverConfusableWordsStep : CHPostprocessingStep

- (id)process:(id)a0 options:(id)a1;
- (void)checkCharactersInTokenRow:(id)a0 outHasLatin:(BOOL *)a1 outHasCyrillic:(BOOL *)a2;
- (void)checkCharactersInString:(id)a0 outHasLatin:(BOOL *)a1 outHasCyrillic:(BOOL *)a2;

@end
