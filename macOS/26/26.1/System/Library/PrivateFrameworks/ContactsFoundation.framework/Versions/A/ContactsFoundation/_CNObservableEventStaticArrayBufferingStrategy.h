@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events;

- (id)allEvents;
- (id)initWithEvents:(id)a0;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSequenceTerminated;

@end
