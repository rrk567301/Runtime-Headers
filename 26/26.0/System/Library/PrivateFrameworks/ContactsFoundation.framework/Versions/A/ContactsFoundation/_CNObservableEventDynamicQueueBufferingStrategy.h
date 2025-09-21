@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) CNQueue *queue;

- (id)initWithQueue:(id)a0;
- (void)addEvent:(id)a0;
- (id)allEvents;
- (BOOL)isSequenceTerminated;
- (void).cxx_destruct;

@end
