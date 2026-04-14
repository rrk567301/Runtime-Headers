@interface PodcastsFoundation.SearchResponse : NSObject <MTMAPIResponse> {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ parsedObjectsCache;
}

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)itemInSection:(long long)a0 row:(long long)a1;
- (id)itemsFor:(long long)a0;

@end
