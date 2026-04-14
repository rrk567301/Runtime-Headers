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

- (id)validateBookmark:(id)a0;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (void)reset;
- (BOOL)canStoreInternalStateInBookmark;
- (void).cxx_destruct;
- (void)addToBuffer:(id)a0;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (void)applyBookmark:(id)a0;
- (id)initWithUpstream:(id)a0 size:(unsigned long long)a1 prefetch:(unsigned long long)a2 whenFull:(unsigned long long)a3;
- (id)initWithUpstream:(id)a0 size:(unsigned long long)a1 prefetch:(unsigned long long)a2 whenFull:(unsigned long long)a3 values:(id)a4;

@end
