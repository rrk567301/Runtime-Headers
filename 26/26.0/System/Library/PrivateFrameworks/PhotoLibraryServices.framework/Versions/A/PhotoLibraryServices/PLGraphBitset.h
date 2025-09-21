@class NSData, NSIndexSet, NSArray;

@interface PLGraphBitset : NSObject {
    NSData *_encodedData;
    struct __CFBitVector { } *_bitVector;
    BOOL _isMutable;
}

@property (readonly, nonatomic) struct __CFBitVector { } *bitVector;
@property (readonly, nonatomic) struct __CFBitVector { } *mutableBitVector;
@property (readonly, nonatomic) NSData *encodedData;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long onesCount;
@property (readonly, nonatomic) NSIndexSet *indexSetWithBitsSet;
@property (readonly, nonatomic) NSArray *indexesWithBitsSet;

+ (id)_dataFromRleEncodedData:(id)a0;
+ (unsigned int)_decodeLittleEndianBase128:(const char *)a0 bufferLength:(unsigned long long)a1 bytesRead:(unsigned long long *)a2;
+ (void)_encodeLittleEndianBase128:(unsigned int)a0 toData:(id)a1;
+ (struct __CFBitVector { } *)_immutableBitVectorFromRleEncodedData:(id)a0;
+ (void)_rleEncodeData:(id)a0 intoData:(id)a1;
+ (id)_rleEncodedDataFromBitVector:(struct __CFBitVector { } *)a0;
+ (id)_rleEncodedDataFromData:(id)a0;
+ (unsigned char)dataFormatFromEncodedData:(id)a0;

- (void)dealloc;
- (id)initWithIndexSet:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_pageCount;
- (void)setBit:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void *)_createBitVectorBuffer;
- (void)_enumerateIndexes:(id /* block */)a0;
- (void)_enumeratePages:(id /* block */)a0;
- (unsigned char)_pageAtIndex:(long long)a0;
- (BOOL)bitAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)initWithBitVectorBuffer:(void *)a0 bitCount:(unsigned long long)a1;
- (id)initWithEncodedData:(id)a0 error:(id *)a1;
- (BOOL)intersectsBitset:(id)a0;

@end
