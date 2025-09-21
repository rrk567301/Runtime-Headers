@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { char _forward; unsigned long long _index; unsigned long long _max; double _value; } _imp;
}

@property (readonly, nonatomic) double value;

- (char)isValid;
- (id)nextObject;
- (id).cxx_construct;
- (id)enumerator;
- (unsigned long long)index;
- (void)setValue:(double)a0;
- (char)isValidNonZero;

@end
