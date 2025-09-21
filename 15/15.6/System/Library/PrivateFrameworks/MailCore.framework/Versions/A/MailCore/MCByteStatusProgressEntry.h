@interface MCByteStatusProgressEntry : MCProgressEntry

@property (nonatomic) long long totalBytes;

+ (id)keyPathsForValuesAffectingStatusText;

- (id)statusText;
- (char)indeterminate;
- (id)observedProgressKeyPaths;
- (void)refreshValues;

@end
