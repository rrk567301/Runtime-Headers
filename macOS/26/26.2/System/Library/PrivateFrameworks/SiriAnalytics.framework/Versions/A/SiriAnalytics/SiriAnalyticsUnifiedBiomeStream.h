@class BMSource, BMStoreStream, NSURL;

@interface SiriAnalyticsUnifiedBiomeStream : NSObject {
    BMStoreStream *_stream;
    BMSource *_source;
    NSURL *_url;
}

- (void)prune;
- (id)initWithReadWriteStorageURL:(id)a0 prefs:(id)a1;
- (void)fetchMessagesSinceBookmark:(id)a0 receiveMessage:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)sendEvents:(id)a0;
- (void)fetchMessagesSince:(double)a0 receiveMessage:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchMessagesBatchSinceBookmark:(id)a0 batchSize:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;
- (id)initWithStorageURL:(id)a0 prefs:(id)a1;
- (id)initWithReadOnlyStorageURL:(id)a0 prefs:(id)a1;

@end
