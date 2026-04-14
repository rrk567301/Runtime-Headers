@interface MCCheckingForMailProgressEntry : MCProgressEntry

@property (nonatomic) unsigned long long foundMessages;
@property (nonatomic) BOOL foundNewUnreadMessageInInbox;
@property (nonatomic) BOOL userInitiated;

+ (id)keyPathsForValuesAffectingProgressName;
+ (id)keyPathsForValuesAffectingShouldDisplay;
+ (id)keyPathsForValuesAffectingStatusText;

- (BOOL)indeterminate;
- (id)statusText;
- (BOOL)shouldDisplay;
- (double)finishDelay;
- (id)observedProgressKeypaths;
- (id)progressName;
- (id)progressSlice;
- (void)refreshValues;

@end
