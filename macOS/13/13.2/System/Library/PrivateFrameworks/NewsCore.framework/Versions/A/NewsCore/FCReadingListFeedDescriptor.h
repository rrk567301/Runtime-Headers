@interface FCReadingListFeedDescriptor : FCPrivateZoneFeedDescriptor

- (id)name;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1 feedType:(long long)a2;
- (id)backingHeadlineIDs;
- (id)initWithReadingList:(id)a0 identifier:(id)a1;
- (id)readingList;

@end
