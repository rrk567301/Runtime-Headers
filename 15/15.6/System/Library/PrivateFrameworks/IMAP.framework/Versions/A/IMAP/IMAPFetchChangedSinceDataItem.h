@interface IMAPFetchChangedSinceDataItem : IMAPFetchDataItem

- (id)init;
- (id)initWithModificationSequenceNumber:(unsigned long long)a0 includeVanished:(char)a1;

@end
