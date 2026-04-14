@interface IAMApplicationDidBecomeActiveEvent : IAMCountableEvent

- (long long)type;
- (id)initWithName:(id)a0 type:(long long)a1;
- (id)initWithName:(id)a0;
- (id)name;

@end
