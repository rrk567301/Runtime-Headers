@interface MCSendingMessagesProgressEntry : MCByteStatusProgressEntry

+ (id)keyPathsAffectingValuesForProgressName;

- (id)progressName;
- (id)progressSlice;
- (double)finishDelay;

@end
