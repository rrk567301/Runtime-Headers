@interface CHTransliterateChineseStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;

- (void)dealloc;
- (id)init;
- (id)process:(id)a0;

@end
