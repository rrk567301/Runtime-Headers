@interface NEBitVector : NSObject {
    unsigned int _bitmapSize;
    unsigned int _bitCount;
    char *_bitmap;
}

+ (BOOL)getBitAtIndexWithBitmap:(char *)a0 bitCount:(unsigned int)a1 index:(long long)a2;
+ (unsigned int)getByteCount:(unsigned int)a0;
+ (void)setBitAtIndexWithBitmap:(char *)a0 bitCount:(unsigned int)a1 index:(long long)a2 toValue:(BOOL)a3;

- (void)clearAllBits;
- (BOOL)getBitAtIndex:(long long)a0;
- (id)initWithBitMap:(char *)a0 bitmapSize:(unsigned int)a1 bitCount:(unsigned int)a2;
- (void)printBits;
- (void)setBitAtIndex:(long long)a0 toValue:(BOOL)a1;

@end
