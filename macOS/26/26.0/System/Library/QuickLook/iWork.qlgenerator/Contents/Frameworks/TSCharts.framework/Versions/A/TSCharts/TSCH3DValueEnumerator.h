@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _imp;
}

@property (readonly, nonatomic) double value;

- (unsigned long long)index;
- (void)setValue:(double)a0;
- (BOOL)isValid;
- (id)nextObject;
- (id).cxx_construct;
- (id)enumerator;
- (BOOL)isValidNonZero;

@end
