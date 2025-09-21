@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (BOOL)trigger;
- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (BOOL)hasBeenTriggered;
- (void)executeOnce:(id /* block */)a0;
- (void).cxx_destruct;

@end
