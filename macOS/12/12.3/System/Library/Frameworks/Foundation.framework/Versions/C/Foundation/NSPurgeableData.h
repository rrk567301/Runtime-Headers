@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned long long _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (BOOL)beginContentAccess;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (BOOL)isContentDiscarded;
- (void)_destroyMemory;

@end
