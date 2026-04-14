@interface NSConcreteSetChange : NSSetChange {
    unsigned long long _changeType;
    id _value;
}

- (unsigned long long)changeType;
- (id)value;
- (void)dealloc;
- (id)initWithType:(unsigned long long)a0 object:(id)a1;

@end
