@class BMFrameStore, BMStreamMetadata, BMStreamDatastore, BMStoreBookmark;
@protocol BMStoreBookmarkEnumerator;

@interface BMStoreEnumerator : NSObject {
    unsigned long long _frameStoreOffset;
    double _iterationStartTime;
    double _endTime;
    unsigned long long _maxEvents;
    unsigned long long _eventCount;
    unsigned long long _lastEventCount;
    unsigned long long _options;
    BMStreamMetadata *_metadata;
    Class _dataType;
}

@property (readonly, nonatomic) BMFrameStore *currentFrameStore;
@property (readonly, nonatomic) BMStreamMetadata *metadata;
@property (readonly, nonatomic) BMStreamDatastore *ds;
@property (readonly, nonatomic) id<BMStoreBookmarkEnumerator> bookmarkEnumerator;
@property (readonly, nonatomic) BMStoreBookmark *bookmark;

- (BOOL)isDataAccessible;
- (BOOL)advanceBookmarkV1ToStartTime:(double)a0 eventsFound:(unsigned long long *)a1 lastN:(unsigned long long)a2;
- (BOOL)skipToBookmarkOffset:(id)a0;
- (void)nextEventWithContext:(id /* block */)a0;
- (id)nextEvent;
- (BOOL)advanceBookmarkV2ToStartTime:(double)a0 eventsFound:(unsigned long long *)a1 lastN:(unsigned long long)a2;
- (id)copyNextEventAndMoveBookmark:(BOOL)a0;
- (id)peekEvent;
- (void)setEndTime:(double)a0 maxEvents:(unsigned long long)a1 lastN:(unsigned long long)a2 reverse:(BOOL)a3;
- (id)initWithStreamDatastore:(id)a0 startTime:(double)a1 endTime:(double)a2 maxEvents:(unsigned long long)a3 lastN:(unsigned long long)a4 options:(unsigned long long)a5;
- (id)initWithStreamDatastore:(id)a0 bookmark:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)advanceBookmarkToStartTime:(double)a0 eventsFound:(unsigned long long *)a1 lastN:(unsigned long long)a2;
- (id)copyNextEventAndMoveBookmark:(BOOL)a0 makeEvent:(id /* block */)a1;
- (id)_eventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)initWithStreamDatastore:(id)a0 currentFrameStore:(id)a1 frameStoreOffset:(unsigned long long)a2 iterationStartTime:(double)a3 endTime:(double)a4 maxEvents:(unsigned long long)a5 lastN:(unsigned long long)a6 options:(unsigned long long)a7 dataType:(Class)a8;
- (id)initWithStreamDatastore:(id)a0 bookmarkEnumerator:(id)a1 error:(id *)a2;
- (id)initWithStreamDatastore:(id)a0 startTime:(double)a1 endTime:(double)a2 maxEvents:(unsigned long long)a3 lastN:(unsigned long long)a4 options:(unsigned long long)a5 dataType:(Class)a6;
- (void).cxx_destruct;

@end
