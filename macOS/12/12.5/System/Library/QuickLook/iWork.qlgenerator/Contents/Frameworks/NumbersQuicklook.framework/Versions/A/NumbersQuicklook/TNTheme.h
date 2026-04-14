@class NSArray;

@interface TNTheme : TSATheme {
    NSArray *mTablePrototypes;
}

@property (retain, nonatomic) NSArray *tablePrototypes;

+ (void)initialize;

- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)p_initDefaultHardCodedStyles;
- (void)bootstrapWhiteHardCodedTheme;
- (void)bootstrapBlackHardCodedTheme;

@end
