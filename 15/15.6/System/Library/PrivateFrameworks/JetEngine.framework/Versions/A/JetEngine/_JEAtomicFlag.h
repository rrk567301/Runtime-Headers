@interface _JEAtomicFlag : NSObject {
    _Atomic char _value;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithInitialValue:(char)a0;
- (char)compareWithValue:(char)a0 andExchangeWithValue:(char)a1;

@end
