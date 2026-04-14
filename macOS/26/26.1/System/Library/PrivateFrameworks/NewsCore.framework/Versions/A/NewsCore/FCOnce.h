@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (void)executeOnce:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)hasBeenTriggered;
- (BOOL)trigger;
- (void).cxx_destruct;
- (id)init;

@end
