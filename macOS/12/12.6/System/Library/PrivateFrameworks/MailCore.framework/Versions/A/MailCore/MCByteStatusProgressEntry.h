@interface MCByteStatusProgressEntry : MCProgressEntry

@property (nonatomic) long long totalBytes;

+ (id)keyPathsForValuesAffectingStatusText;

- (BOOL)indeterminate;
- (id)statusText;
- (void)refreshValues;
- (id)observedProgressKeyPaths;

@end
