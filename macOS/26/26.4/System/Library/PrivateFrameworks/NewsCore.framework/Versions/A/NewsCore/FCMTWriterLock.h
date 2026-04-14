@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (id)readObject:(id /* block */)a0;
- (void)unlock;
- (void).cxx_destruct;
- (id)init;
- (void)lock;
- (BOOL)readBool:(id /* block */)a0;
- (id)initWithUnderlyingLock:(id)a0;
- (void)performReadSync:(id /* block */)a0;
- (void)performWriteSync:(id /* block */)a0;

@end
