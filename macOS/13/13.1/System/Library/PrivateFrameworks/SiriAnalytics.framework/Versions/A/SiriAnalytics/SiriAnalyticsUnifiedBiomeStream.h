@class BMSource, BMStoreStream, NSURL, SiriAnalyticsPreferences;

@interface SiriAnalyticsUnifiedBiomeStream : NSObject {
    BMStoreStream *_stream;
    BMSource *_source;
    SiriAnalyticsPreferences *_prefs;
    NSURL *_url;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendEvents:(id)a0;
- (void)prune;
- (id)initWithStorageURL:(id)a0 prefs:(id)a1;
- (void)fetchMessagesSince:(double)a0 receiveMessage:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchMessagesSinceBookmark:(id)a0 receiveMessage:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchMessagesBatchSinceBookmark:(id)a0 batchSize:(unsigned long long)a1 completion:(id /* block */)a2;

@end
