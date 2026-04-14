@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (id)init;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (void)performReadSync:(id /* block */)a0;
- (void)performWriteSync:(id /* block */)a0;
- (id)initWithUnderlyingLock:(id)a0;

@end
