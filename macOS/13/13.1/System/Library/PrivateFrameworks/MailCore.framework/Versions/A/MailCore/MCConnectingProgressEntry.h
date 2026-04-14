@class NSArray;

@interface MCConnectingProgressEntry : MCProgressEntry

@property (copy, nonatomic) NSArray *connectingAccountNames;

+ (id)keyPathsForValuesAffectingStatusText;

- (void).cxx_destruct;
- (BOOL)indeterminate;
- (id)statusText;
- (id)observedProgressKeypaths;
- (void)refreshValues;
- (id)progressName;
- (id)progressSlice;

@end
