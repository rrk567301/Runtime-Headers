@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (void)executeOnce:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)hasBeenTriggered;
- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (BOOL)trigger;

@end
