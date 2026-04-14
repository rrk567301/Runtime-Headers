@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _imp;
}

@property (readonly, nonatomic) double value;

- (id)enumerator;
- (unsigned long long)index;
- (BOOL)isValid;
- (id).cxx_construct;
- (void)setValue:(double)a0;
- (id)nextObject;
- (BOOL)isValidNonZero;

@end
