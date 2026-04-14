@interface IRTimerProvider : NSObject

- (id)timerWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 block:(id /* block */)a3;

@end
