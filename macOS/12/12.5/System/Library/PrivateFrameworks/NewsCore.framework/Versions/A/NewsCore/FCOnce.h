@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)trigger;
- (BOOL)hasBeenTriggered;
- (void)executeOnce:(id /* block */)a0;

@end
