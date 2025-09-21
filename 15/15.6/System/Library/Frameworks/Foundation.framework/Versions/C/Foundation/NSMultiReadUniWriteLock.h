@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (void)lock;
- (void)setName:(id)a0;
- (void)unlock;
- (void)lockForReading;
- (char)lockForReadingBeforeDate:(id)a0;
- (void)lockForWriting;
- (char)lockForWritingBeforeDate:(id)a0;
- (char)tryLockForReading;
- (char)tryLockForWriting;

@end
