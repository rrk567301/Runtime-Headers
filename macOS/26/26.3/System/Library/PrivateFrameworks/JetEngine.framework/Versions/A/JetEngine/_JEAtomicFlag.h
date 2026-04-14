@interface _JEAtomicFlag : NSObject {
    _Atomic BOOL _value;
}

- (id)initWithInitialValue:(BOOL)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)compareWithValue:(BOOL)a0 andExchangeWithValue:(BOOL)a1;

@end
