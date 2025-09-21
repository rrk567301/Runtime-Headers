@interface MCDownloadingMessagesProgressEntry : MCDeterminateUnitProgressEntry

+ (id)keyPathsForValuesAffectingProgressName;

- (long long)_significantMessageCount;
- (char)hasSignificantDeferrableWork;
- (id)progressName;
- (id)progressSlice;

@end
