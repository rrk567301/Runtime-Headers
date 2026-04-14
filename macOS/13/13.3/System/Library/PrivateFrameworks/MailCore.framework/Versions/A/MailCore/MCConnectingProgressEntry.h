@class NSArray;

@interface MCConnectingProgressEntry : MCProgressEntry

@property (copy, nonatomic) NSArray *connectingAccountNames;

+ (id)keyPathsForValuesAffectingStatusText;

- (void).cxx_destruct;
- (BOOL)indeterminate;
- (id)statusText;
- (id)observedProgressKeypaths;
- (id)progressName;
- (id)progressSlice;
- (void)refreshValues;

@end
