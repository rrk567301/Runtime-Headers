@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (BOOL)trigger;
- (BOOL)hasBeenTriggered;
- (void).cxx_destruct;
- (void)executeOnce:(id /* block */)a0;

@end
