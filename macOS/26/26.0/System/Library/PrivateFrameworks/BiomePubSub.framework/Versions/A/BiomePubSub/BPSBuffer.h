@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSBuffer : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *values;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long prefetch;
@property (readonly, nonatomic) unsigned long long whenFull;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)initWithUpstream:(id)a0 size:(unsigned long long)a1 prefetch:(unsigned long long)a2 whenFull:(unsigned long long)a3;
- (id)validateBookmark:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)initWithUpstream:(id)a0 size:(unsigned long long)a1 prefetch:(unsigned long long)a2 whenFull:(unsigned long long)a3 values:(id)a4;
- (void)addToBuffer:(id)a0;
- (void).cxx_destruct;

@end
