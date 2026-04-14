@interface _JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

- (long long)increment;
- (long long)decrement;
- (id)initWithInitialValue:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
