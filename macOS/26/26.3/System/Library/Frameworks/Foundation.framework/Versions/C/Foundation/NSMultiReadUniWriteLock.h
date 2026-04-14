@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)description;
- (id)init;
- (id)name;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)lockForReading;
- (BOOL)lockForReadingBeforeDate:(id)a0;
- (void)lockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)a0;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;

@end
