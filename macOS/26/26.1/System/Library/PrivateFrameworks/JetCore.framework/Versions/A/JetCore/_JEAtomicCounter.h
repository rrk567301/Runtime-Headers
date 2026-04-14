@interface _JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

- (long long)decrement;
- (unsigned long long)hash;
- (id)description;
- (id)initWithInitialValue:(long long)a0;
- (long long)increment;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
