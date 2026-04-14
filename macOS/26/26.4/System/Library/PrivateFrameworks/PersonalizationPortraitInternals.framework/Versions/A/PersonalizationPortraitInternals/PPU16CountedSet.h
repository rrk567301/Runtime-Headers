@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    union type { unsigned char __data[24]; } _vectorInlineStorage;
}

- (void)addValue:(unsigned short)a0;
- (unsigned short)countForValue:(unsigned short)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)uniqueValueCount;
- (id)init;
- (id)description;
- (id)dictionary;
- (void)dealloc;

@end
