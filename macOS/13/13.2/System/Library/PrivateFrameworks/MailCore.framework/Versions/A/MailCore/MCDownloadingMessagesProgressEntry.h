@interface MCDownloadingMessagesProgressEntry : MCDeterminateUnitProgressEntry

+ (id)keyPathsForValuesAffectingProgressName;

- (id)progressName;
- (id)progressSlice;
- (BOOL)hasSignificantDeferrableWork;
- (long long)_significantMessageCount;

@end
