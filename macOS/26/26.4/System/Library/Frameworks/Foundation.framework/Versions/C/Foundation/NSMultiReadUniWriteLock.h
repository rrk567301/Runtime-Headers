@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (void)unlock;
- (void)setName:(id)a0;
- (id)init;
- (id)description;
- (void)lock;
- (void)dealloc;
- (void)lockForReading;
- (BOOL)lockForReadingBeforeDate:(id)a0;
- (void)lockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)a0;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;

@end
