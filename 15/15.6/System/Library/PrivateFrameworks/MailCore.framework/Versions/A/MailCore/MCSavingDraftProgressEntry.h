@interface MCSavingDraftProgressEntry : MCByteStatusProgressEntry

@property (nonatomic) char userInitiated;

+ (id)keyPathsForValuesAffectingProgressName;
+ (id)keyPathsForValuesAffectingShouldDisplay;

- (char)shouldDisplay;
- (double)finishDelay;
- (id)observedProgressKeypaths;
- (id)progressName;
- (id)progressSlice;
- (void)refreshValues;

@end
