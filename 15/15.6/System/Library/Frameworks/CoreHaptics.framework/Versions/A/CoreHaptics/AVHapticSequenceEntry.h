@interface AVHapticSequenceEntry : NSObject

@property (copy) id /* block */ handler;
@property char running;
@property char detached;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;

@end
