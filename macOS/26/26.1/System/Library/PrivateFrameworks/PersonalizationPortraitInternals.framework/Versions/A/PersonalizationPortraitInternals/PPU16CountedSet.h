@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    union type { unsigned char __data[24]; } _vectorInlineStorage;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (id)dictionary;
- (void)addValue:(unsigned short)a0;
- (id)description;
- (unsigned short)countForValue:(unsigned short)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)uniqueValueCount;
- (id)init;

@end
