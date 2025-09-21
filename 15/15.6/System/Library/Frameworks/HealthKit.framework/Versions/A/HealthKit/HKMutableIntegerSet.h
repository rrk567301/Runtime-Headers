@interface HKMutableIntegerSet : HKIntegerSet <NSSecureCoding, NSCopying> {
    char _enumerating;
}

@property (class, readonly) char supportsSecureCoding;

- (id)initWithCapacity:(unsigned long long)a0;
- (void)addInteger:(long long)a0;
- (void)enumerateIntegersUsingBlock:(id /* block */)a0;
- (void)removeInteger:(long long)a0;

@end
