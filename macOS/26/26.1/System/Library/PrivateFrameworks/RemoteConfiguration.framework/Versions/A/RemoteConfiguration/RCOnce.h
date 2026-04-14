@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (void)executeOnce:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)hasBeenTriggered;
- (BOOL)trigger;
- (void).cxx_destruct;
- (id)init;

@end
