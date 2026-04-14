@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) CNQueue *queue;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)addEvent:(id)a0;
- (id)allEvents;
- (BOOL)isSequenceTerminated;

@end
