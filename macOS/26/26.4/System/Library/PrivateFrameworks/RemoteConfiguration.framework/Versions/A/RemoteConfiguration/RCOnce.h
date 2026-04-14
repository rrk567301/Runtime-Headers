@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)trigger;
- (void)executeOnce:(id /* block */)a0;
- (BOOL)hasBeenTriggered;

@end
