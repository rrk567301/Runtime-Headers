@interface JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

@property (readonly) long long currentValue;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (long long)increment;
- (long long)decrement;
- (id)initWithInitialValue:(long long)a0;

@end
