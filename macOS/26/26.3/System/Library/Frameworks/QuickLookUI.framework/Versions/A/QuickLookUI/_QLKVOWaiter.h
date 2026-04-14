@class NSString;

@interface _QLKVOWaiter : NSObject {
    id _object;
    NSString *_key;
    id _value;
    BOOL _continue;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)waitWithTimeout:(double)a0;
- (void).cxx_destruct;
- (void)wait;
- (id)initWithObject:(id)a0 key:(id)a1 value:(id)a2;

@end
