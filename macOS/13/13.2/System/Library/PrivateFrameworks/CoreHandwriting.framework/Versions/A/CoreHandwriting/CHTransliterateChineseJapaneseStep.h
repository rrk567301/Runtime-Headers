@interface CHTransliterateChineseJapaneseStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;
@property (nonatomic) BOOL transliterateSentences;

- (void)dealloc;
- (id)process:(id)a0 options:(id)a1;
- (id)initWithTransliterateSentences:(BOOL)a0;
- (id)handleChineseLigaturesInString:(id)a0;

@end
