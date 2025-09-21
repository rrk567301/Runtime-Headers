@interface _JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

- (long long)decrement;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)increment;
- (id)initWithInitialValue:(long long)a0;

@end
