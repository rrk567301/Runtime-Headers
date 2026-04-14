@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (BOOL)readBool:(id /* block */)a0;
- (void)unlock;
- (void)performReadSync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithUnderlyingLock:(id)a0;
- (void)lock;
- (id)readObject:(id /* block */)a0;
- (id)init;
- (void)performWriteSync:(id /* block */)a0;

@end
