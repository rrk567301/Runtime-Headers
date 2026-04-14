@class TRIPBMessage;

@interface TRIPBInt64Array : NSObject <NSCopying> {
    TRIPBMessage *_autocreator;
    long long *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)arrayWithValue:(long long)a0;
+ (id)arrayWithValueArray:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAll;
- (long long)valueAtIndex:(unsigned long long)a0;
- (void)addValue:(long long)a0;
- (id)initWithValues:(const long long *)a0 count:(unsigned long long)a1;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(long long)a1;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)addValuesFromArray:(id)a0;
- (id)initWithValueArray:(id)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)addValues:(const long long *)a0 count:(unsigned long long)a1;
- (void)insertValue:(long long)a0 atIndex:(unsigned long long)a1;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;

@end
