@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (BOOL)trigger;
- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (BOOL)hasBeenTriggered;
- (void)executeOnce:(id /* block */)a0;
- (void).cxx_destruct;

@end
