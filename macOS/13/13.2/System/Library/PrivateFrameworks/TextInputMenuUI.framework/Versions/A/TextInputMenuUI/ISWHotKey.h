@interface ISWHotKey : NSObject {
    struct __CGEvent { } *refireEvent;
}

@property unsigned int signature;
@property long long identifier;
@property BOOL pressed;
@property struct __CGEvent { } *refireEvent;

- (void)dealloc;
- (id)initWithSignature:(unsigned int)a0 identifier:(long long)a1 pressedFlag:(BOOL)a2;
- (void)refire;

@end
