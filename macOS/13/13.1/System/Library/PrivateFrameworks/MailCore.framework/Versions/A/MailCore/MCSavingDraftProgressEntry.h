@interface MCSavingDraftProgressEntry : MCByteStatusProgressEntry

@property (nonatomic) BOOL userInitiated;

+ (id)keyPathsForValuesAffectingProgressName;
+ (id)keyPathsForValuesAffectingShouldDisplay;

- (BOOL)shouldDisplay;
- (id)observedProgressKeypaths;
- (void)refreshValues;
- (id)progressName;
- (id)progressSlice;
- (double)finishDelay;

@end
