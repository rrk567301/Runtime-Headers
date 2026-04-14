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

- (void)requestNextEvents;
- (id)validateBookmark:(id)a0;
- (id)initWithUpstream:(id)a0 createSubject:(id /* block */)a1;
- (void)subscribeTo:(id)a0;
- (void)connect;
- (void)_connect;
- (id)startWithSubscriber:(id)a0;
- (void)applyBookmarkNode:(id)a0;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)toPublisher;
- (void)reset;
- (BOOL)canStoreInternalStateInBookmark;
- (id)lazySubject;
- (void)registerMulticastDownstream:(id)a0;
- (void).cxx_destruct;
- (BOOL)completedForMulticastDownstream:(id)a0;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (void)applyBookmark:(id)a0;
- (id)nextEventForMulticastDownstream:(id)a0;

@end
