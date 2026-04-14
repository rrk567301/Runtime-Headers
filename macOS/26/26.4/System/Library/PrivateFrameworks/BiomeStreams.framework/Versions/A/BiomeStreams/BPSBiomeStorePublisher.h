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

- (id)validateBookmark:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1;
- (BOOL)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (id)upstreamPublishers;
- (id)nextEvent;
- (id)bookmarkableUpstreams;
- (id)bookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (void)subscribe:(id)a0;
- (id)withLastEvents:(unsigned long long)a0;
- (id)withMaxEvents:(unsigned long long)a0;
- (id)withIndexSearch:(id)a0;
- (id)withBookmark:(id)a0;
- (void).cxx_destruct;
- (id)reverse;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2;
- (id)withEndTime:(double)a0;
- (void)reset;
- (id)init;
- (id)withStartTime:(double)a0;
- (id)_newEnumerator;
- (id)initWithStreamDatastoreReader:(id)a0 streamsAccessClient:(id)a1;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2 eventDataClass:(Class)a3;

@end
