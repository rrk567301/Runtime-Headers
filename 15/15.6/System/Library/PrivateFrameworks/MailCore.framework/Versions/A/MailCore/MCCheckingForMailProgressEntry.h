@interface MCCheckingForMailProgressEntry : MCProgressEntry

@property (nonatomic) unsigned long long foundMessages;
@property (nonatomic) char foundNewUnreadMessageInInbox;
@property (nonatomic) char userInitiated;

+ (id)keyPathsForValuesAffectingProgressName;
+ (id)keyPathsForValuesAffectingShouldDisplay;
+ (id)keyPathsForValuesAffectingStatusText;

- (id)statusText;
- (char)indeterminate;
- (char)shouldDisplay;
- (double)finishDelay;
- (id)observedProgressKeypaths;
- (id)progressName;
- (id)progressSlice;
- (void)refreshValues;

@end
