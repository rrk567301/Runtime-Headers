@class NFUnfairLock;

@interface FCOnce : NSObject {
    char _finished;
    NFUnfairLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (char)trigger;
- (void)executeOnce:(id /* block */)a0;
- (char)hasBeenTriggered;

@end
