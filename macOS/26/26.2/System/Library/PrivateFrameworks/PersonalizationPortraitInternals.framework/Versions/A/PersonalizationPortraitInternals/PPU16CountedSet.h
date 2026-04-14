@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    union type { unsigned char __data[24]; } _vectorInlineStorage;
}

- (void)addValue:(unsigned short)a0;
- (id)dictionary;
- (unsigned short)countForValue:(unsigned short)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)uniqueValueCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (void)dealloc;

@end
