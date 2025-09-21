@interface CHTransliterateChineseJapaneseStep : CHPostprocessingStep {
    char _transliterateSentences;
    void **_icuTransliterator;
}

- (void)dealloc;
- (id)initWithTransliterateSentences:(char)a0;
- (id)process:(id)a0 options:(id)a1;

@end
