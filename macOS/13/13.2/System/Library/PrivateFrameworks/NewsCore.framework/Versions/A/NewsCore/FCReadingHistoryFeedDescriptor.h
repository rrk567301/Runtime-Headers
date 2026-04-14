@interface FCReadingHistoryFeedDescriptor : FCPrivateZoneFeedDescriptor

- (id)name;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1 feedType:(long long)a2;
- (id)backingHeadlineIDs;
- (id)initWithReadingHistory:(id)a0 identifier:(id)a1;
- (id)readingHistory;

@end
