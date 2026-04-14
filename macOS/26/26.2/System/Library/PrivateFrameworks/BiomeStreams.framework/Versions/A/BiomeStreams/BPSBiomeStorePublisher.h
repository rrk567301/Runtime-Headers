@class NSString, BMIndexSearch, BMStoreEnumerator, BMStoreBookmark, BMAccessClient, BMStreamDatastoreReader;

@interface BPSBiomeStorePublisher : BMBookmarkablePublisher {
    double _startTime;
    double _endTime;
    unsigned long long _maxEvents;
    unsigned long long _lastEventCount;
    BOOL _reversed;
    BMStoreBookmark *_bookmark;
    BMIndexSearch *_indexSearch;
    BMAccessClient *_accessClient;
    BMStreamDatastoreReader *_streamDatastoreReader;
}

@property (retain, nonatomic) BMStoreEnumerator *enumerator;
@property (nonatomic) BOOL finished;
@property (readonly, nonatomic) NSString *streamId;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)completed;
- (id)validateBookmark:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (id)withEndTime:(double)a0;
- (id)bookmark;
- (id)withStartTime:(double)a0;
- (BOOL)canStorePassThroughValueInBookmark;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)_newEnumerator;
- (void)reset;
- (BOOL)canStoreInternalStateInBookmark;
- (void).cxx_destruct;
- (id)withBookmark:(id)a0;
- (id)initWithStreamDatastoreReader:(id)a0 streamsAccessClient:(id)a1;
- (id)withIndexSearch:(id)a0;
- (id)reverse;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1;
- (id)bookmarkableUpstreams;
- (id)withMaxEvents:(unsigned long long)a0;
- (id)upstreamPublishers;
- (id)init;
- (id)withLastEvents:(unsigned long long)a0;
- (void)applyBookmark:(id)a0;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2 eventDataClass:(Class)a3;

@end
