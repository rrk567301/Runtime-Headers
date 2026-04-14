@class NSDisplayCyclePhase;

@interface NSDisplayCycleObserver : NSObject {
    NSDisplayCyclePhase *_phase;
    id /* block */ _handler;
}

@property (readonly) NSDisplayCyclePhase *phase;
@property (readonly, copy) id /* block */ handler;

- (id)description;
- (void)dealloc;
- (id)initWithPhase:(id)a0 handler:(id /* block */)a1;

@end
