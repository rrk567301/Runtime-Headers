@interface MCCheckingForMailProgressEntry : MCProgressEntry

@property (nonatomic) unsigned long long foundMessages;
@property (nonatomic) BOOL foundNewUnreadMessageInInbox;
@property (nonatomic) BOOL userInitiated;

+ (id)keyPathsForValuesAffectingStatusText;
+ (id)keyPathsForValuesAffectingProgressName;
+ (id)keyPathsForValuesAffectingShouldDisplay;

- (BOOL)indeterminate;
- (id)statusText;
- (BOOL)shouldDisplay;
- (id)observedProgressKeypaths;
- (void)refreshValues;
- (id)progressName;
- (id)progressSlice;
- (double)finishDelay;

@end
