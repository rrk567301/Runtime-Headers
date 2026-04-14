@interface MCSendingMessagesProgressEntry : MCByteStatusProgressEntry

+ (id)keyPathsForValuesAffectingProgressName;

- (id)progressName;
- (id)progressSlice;
- (double)finishDelay;

@end
