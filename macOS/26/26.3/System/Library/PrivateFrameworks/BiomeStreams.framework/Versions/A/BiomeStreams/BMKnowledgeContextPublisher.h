@class _DKEventQuery, BPSPublisher, NSString;
@protocol _CDUserContext, _DKKnowledgeQuerying;

@interface BMKnowledgeContextPublisher : BPSPublisher <BMLiveEventsPublisher>

@property (retain, nonatomic) _DKEventQuery *query;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (retain, nonatomic) id<_CDUserContext> context;
@property (nonatomic) BOOL includeLiveEvents;
@property (retain, nonatomic) BPSPublisher *combinedPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextEvent;
- (id)upstreamPublishers;
- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (id)initWithQuery:(id)a0 store:(id)a1 context:(id)a2 includeLiveEvents:(BOOL)a3;
- (void).cxx_destruct;
- (void)reset;
- (id)withLiveEvents;
- (id)_combinedPublisher;

@end
