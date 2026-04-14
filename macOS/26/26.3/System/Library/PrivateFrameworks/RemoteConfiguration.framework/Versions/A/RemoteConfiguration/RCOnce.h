@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (BOOL)trigger;
- (BOOL)hasBeenTriggered;
- (void).cxx_destruct;
- (void)executeOnce:(id /* block */)a0;

@end
