@class NSArray;

@interface MCConnectingProgressEntry : MCProgressEntry

@property (copy, nonatomic) NSArray *connectingAccountNames;

+ (id)keyPathsForValuesAffectingStatusText;

- (void).cxx_destruct;
- (id)statusText;
- (char)indeterminate;
- (id)observedProgressKeypaths;
- (id)progressName;
- (id)progressSlice;
- (void)refreshValues;

@end
