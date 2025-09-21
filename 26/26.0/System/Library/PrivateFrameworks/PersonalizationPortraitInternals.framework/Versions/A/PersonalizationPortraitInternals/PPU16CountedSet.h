@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    union type { unsigned char __data[24]; } _vectorInlineStorage;
}

- (unsigned short)countForValue:(unsigned short)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addValue:(unsigned short)a0;
- (id)init;
- (unsigned long long)uniqueValueCount;
- (id)description;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (id)dictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
