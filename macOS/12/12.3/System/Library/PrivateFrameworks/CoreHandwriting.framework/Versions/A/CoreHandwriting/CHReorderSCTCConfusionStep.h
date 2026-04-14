@interface CHReorderSCTCConfusionStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;
@property (nonatomic) long long maxResultCount;

- (void)dealloc;
- (id)process:(id)a0 options:(id)a1;
- (id)initWithMaxResultCount:(long long)a0;

@end
