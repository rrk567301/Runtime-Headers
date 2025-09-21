@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) char finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (char)trigger;
- (void)executeOnce:(id /* block */)a0;
- (char)hasBeenTriggered;

@end
