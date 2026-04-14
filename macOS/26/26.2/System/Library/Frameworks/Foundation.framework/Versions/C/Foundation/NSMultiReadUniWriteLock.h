@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setName:(id)a0;
- (void)unlock;
- (id)description;
- (id)name;
- (void)lock;
- (id)init;
- (void)dealloc;
- (void)lockForReading;
- (BOOL)lockForReadingBeforeDate:(id)a0;
- (void)lockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)a0;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;

@end
