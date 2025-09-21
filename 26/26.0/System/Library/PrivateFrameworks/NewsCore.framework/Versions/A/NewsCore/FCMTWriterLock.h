@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (void)unlock;
- (void)performReadSync:(id /* block */)a0;
- (void)lock;
- (BOOL)readBool:(id /* block */)a0;
- (id)readObject:(id /* block */)a0;
- (id)init;
- (void)performWriteSync:(id /* block */)a0;
- (id)initWithUnderlyingLock:(id)a0;
- (void).cxx_destruct;

@end
