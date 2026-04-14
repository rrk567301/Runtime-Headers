@interface MCDownloadingMessagesProgressEntry : MCDeterminateUnitProgressEntry

+ (id)keyPathsAffectingValuesForProgressName;

- (id)progressName;
- (id)progressSlice;
- (long long)_significantMessageCount;
- (BOOL)hasSignificantDeferrableWork;

@end
