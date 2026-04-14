@interface MCSavingDraftProgressEntry : MCByteStatusProgressEntry

@property (nonatomic) BOOL userInitiated;

+ (id)keyPathsAffectingValuesForProgressName;
+ (id)keyPathsAffectingValuesForShouldDisplay;

- (BOOL)shouldDisplay;
- (id)observedProgressKeypaths;
- (void)refreshValues;
- (id)progressName;
- (id)progressSlice;
- (double)finishDelay;

@end
