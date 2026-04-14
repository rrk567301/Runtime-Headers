@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (void)executeOnce:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)hasBeenTriggered;
- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (BOOL)trigger;

@end
