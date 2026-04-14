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

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)upstreamPublishers;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2 eventDataClass:(Class)a3;
- (id)bookmarkableUpstreams;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2;
- (id)_newEnumerator;
- (id)withBookmark:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (id)withLastEvents:(unsigned long long)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)bookmark;
- (id)validateBookmark:(id)a0;
- (id)init;
- (void)applyBookmark:(id)a0;
- (id)withMaxEvents:(unsigned long long)a0;
- (id)withEndTime:(double)a0;
- (id)reverse;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1;
- (id)withStartTime:(double)a0;
- (id)initWithStreamDatastoreReader:(id)a0 streamsAccessClient:(id)a1;
- (id)withIndexSearch:(id)a0;
- (void).cxx_destruct;

@end
