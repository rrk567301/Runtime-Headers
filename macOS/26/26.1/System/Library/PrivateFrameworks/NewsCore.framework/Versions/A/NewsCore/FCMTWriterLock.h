@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (void)unlock;
- (void)performWriteSync:(id /* block */)a0;
- (BOOL)readBool:(id /* block */)a0;
- (id)readObject:(id /* block */)a0;
- (void)lock;
- (id)initWithUnderlyingLock:(id)a0;
- (void)performReadSync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
