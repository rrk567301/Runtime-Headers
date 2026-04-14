@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events;

- (void)addEvent:(id)a0;
- (id)allEvents;
- (BOOL)isSequenceTerminated;
- (id)initWithEvents:(id)a0;
- (void).cxx_destruct;

@end
