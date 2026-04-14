@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events;

- (void)addEvent:(id)a0;
- (id)allEvents;
- (id)initWithEvents:(id)a0;
- (BOOL)isSequenceTerminated;
- (void).cxx_destruct;

@end
