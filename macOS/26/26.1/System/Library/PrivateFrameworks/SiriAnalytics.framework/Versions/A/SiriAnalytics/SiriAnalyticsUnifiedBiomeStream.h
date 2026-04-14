@class BMSource, BMStoreStream, NSURL;

@interface SiriAnalyticsUnifiedBiomeStream : NSObject {
    BMStoreStream *_stream;
    BMSource *_source;
    NSURL *_url;
}

- (void)prune;
- (id)initWithReadOnlyStorageURL:(id)a0 prefs:(id)a1;
- (void)sendEvents:(id)a0;
- (void)fetchMessagesSince:(double)a0 receiveMessage:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchMessagesSinceBookmark:(id)a0 receiveMessage:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithStorageURL:(id)a0 prefs:(id)a1;
- (void).cxx_destruct;
- (id)initWithReadWriteStorageURL:(id)a0 prefs:(id)a1;
- (void)fetchMessagesBatchSinceBookmark:(id)a0 batchSize:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;

@end
