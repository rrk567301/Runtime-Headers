@interface TSCEConfiguration : NSObject {
    char mWarnWhenFormulasReferToEmptyCells;
}

+ (id)sharedCalculationEngineConfiguration;

- (id)init;
- (void)setWarnWhenFormulasReferToEmptyCells:(char)a0;
- (char)warnWhenFormulasReferToEmptyCells;

@end
