@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (void)lock;
- (void)unlock;
- (void)setName:(id)a0;
- (void)lockForReading;
- (BOOL)tryLockForReading;
- (BOOL)lockForReadingBeforeDate:(id)a0;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)a0;

@end
