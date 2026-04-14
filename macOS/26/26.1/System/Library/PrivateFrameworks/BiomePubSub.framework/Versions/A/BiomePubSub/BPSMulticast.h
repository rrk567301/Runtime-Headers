@class NSMutableDictionary, NSString, NSMutableArray, BPSMulticastDownstream;
@protocol BPSPublisher, BPSSubscriber, BPSSubject;

@interface BPSMulticast : BMBookmarkablePublisher <BPSConnectablePublisher, BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BPSSubject, BPSSubscriber> _subject;
}

@property (nonatomic) BOOL connected;
@property (nonatomic) unsigned long long bookmarkCount;
@property (nonatomic) unsigned long long resetCount;
@property (retain, nonatomic) NSMutableArray *downstreams;
@property (retain, nonatomic) NSMutableDictionary *pendingEvents;
@property (weak, nonatomic) BPSMulticastDownstream *electedMainDownstream;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id /* block */ createSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)_connect;
- (void)subscribeTo:(id)a0;
- (void)connect;
- (id)initWithUpstream:(id)a0 createSubject:(id /* block */)a1;
- (void)applyBookmark:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (id)validateBookmark:(id)a0;
- (void)subscribe:(id)a0;
- (id)lazySubject;
- (id)toPublisher;
- (id)nextEvent;
- (void)requestNextEvents;
- (id)nextEventForMulticastDownstream:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)upstreamPublishers;
- (void)applyBookmarkNode:(id)a0;
- (BOOL)completedForMulticastDownstream:(id)a0;
- (void)reset;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (void)registerMulticastDownstream:(id)a0;
- (id)bookmark;

@end
