@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events;

- (void).cxx_destruct;
- (id)allEvents;
- (id)initWithEvents:(id)a0;
- (void)addEvent:(id)a0;
- (BOOL)isSequenceTerminated;

@end
