@interface _CNObservableEventBufferingStrategy : NSObject

+ (id)strategyWithEvents:(id)a0;
+ (id)strategyWithQueue:(id)a0;

- (id)allEvents;
- (void)addEvent:(id)a0;
- (BOOL)isSequenceTerminated;

@end
