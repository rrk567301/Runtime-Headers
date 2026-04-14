@interface MTPartialFeedResponse : PodcastsFoundation.BaseFeedResponse

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)itemsFor:(long long)a0;
- (id)itemInSection:(long long)a0 row:(long long)a1;

@end
