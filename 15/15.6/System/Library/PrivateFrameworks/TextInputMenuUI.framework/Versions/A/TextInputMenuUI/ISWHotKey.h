@interface ISWHotKey : NSObject {
    struct __CGEvent { } *refireEvent;
}

@property unsigned int signature;
@property long long identifier;
@property char pressed;
@property struct __CGEvent { } *refireEvent;

- (void)dealloc;
- (id)initWithSignature:(unsigned int)a0 identifier:(long long)a1 pressedFlag:(char)a2;
- (char)isEqualToEventHotKeyID:(struct EventHotKeyID { unsigned int x0; unsigned int x1; })a0;
- (void)refire;

@end
