@interface MCByteStatusProgressEntry : MCProgressEntry

@property (nonatomic) long long totalBytes;

+ (id)keyPathsForValuesAffectingStatusText;

- (BOOL)indeterminate;
- (id)statusText;
- (id)observedProgressKeyPaths;
- (void)refreshValues;

@end
