@class BMSource, BMStoreStream, NSURL;

@interface SiriAnalyticsUnifiedBiomeStream : NSObject {
    BMStoreStream *_stream;
    BMSource *_source;
    NSURL *_url;
}

- (void)fetchMessagesSinceBookmark:(id)a0 receiveMessage:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchMessagesSince:(double)a0 receiveMessage:(id /* block */)a1 completion:(id /* block */)a2;
- (id)init;
- (void)sendEvents:(id)a0;
- (id)initWithReadOnlyStorageURL:(id)a0 prefs:(id)a1;
- (void)fetchMessagesBatchSinceBookmark:(id)a0 batchSize:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)prune;
- (id)initWithReadWriteStorageURL:(id)a0 prefs:(id)a1;
- (id)initWithStorageURL:(id)a0 prefs:(id)a1;
- (void).cxx_destruct;

@end
