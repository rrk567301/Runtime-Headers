@interface NewsDaemon.ProxyFeedPersonalizer : NSObject <FCFeedPersonalizing> {
    void /* unknown type, empty encoding */ proxyConnection;
}

- (void).cxx_destruct;
- (id)init;
- (double)decayedPublisherDiversificationPenalty;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (id)limitItemsByMinimumItemQuality:(id)a0 scoreProfiles:(id)a1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)rankTagIDsDescending:(id)a0;
- (id)scoresForTagIDs:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;

@end
