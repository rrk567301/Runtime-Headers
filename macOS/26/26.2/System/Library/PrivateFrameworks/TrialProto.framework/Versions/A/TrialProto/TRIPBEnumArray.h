@class TRIPBMessage;

@interface TRIPBEnumArray : NSObject <NSCopying> {
    TRIPBMessage *_autocreator;
    int *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) void /* function */ *validationFunc;

+ (id)array;
+ (id)arrayWithValueArray:(id)a0;
+ (id)arrayWithValidationFunction:(void /* function */ *)a0;
+ (id)arrayWithValidationFunction:(void /* function */ *)a0 capacity:(unsigned long long)a1;
+ (id)arrayWithValidationFunction:(void /* function */ *)a0 rawValue:(int)a1;

- (void)removeAll;
- (void)addValue:(int)a0;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (int)valueAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(int)a1;
- (BOOL)isEqual:(id)a0;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addValues:(const int *)a0 count:(unsigned long long)a1;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (id)initWithValueArray:(id)a0;
- (id)initWithValidationFunction:(void /* function */ *)a0;
- (id)description;
- (id)initWithValidationFunction:(void /* function */ *)a0 capacity:(unsigned long long)a1;
- (id)init;
- (void)insertValue:(int)a0 atIndex:(unsigned long long)a1;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)addRawValue:(int)a0;
- (void)addRawValues:(const int *)a0 count:(unsigned long long)a1;
- (void)addRawValuesFromArray:(id)a0;
- (void)enumerateRawValuesWithBlock:(id /* block */)a0;
- (void)enumerateRawValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithValidationFunction:(void /* function */ *)a0 rawValues:(const int *)a1 count:(unsigned long long)a2;
- (void)insertRawValue:(int)a0 atIndex:(unsigned long long)a1;
- (int)rawValueAtIndex:(unsigned long long)a0;
- (void)replaceValueAtIndex:(unsigned long long)a0 withRawValue:(int)a1;

@end
