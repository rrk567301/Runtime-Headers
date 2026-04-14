@interface _JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

- (long long)decrement;
- (id)initWithInitialValue:(long long)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)increment;

@end
