@interface IMAPBodyHeaderFetchResult : IMAPBodyFetchResult

- (id)section;
- (char)needsLineEndingConversion;

@end
