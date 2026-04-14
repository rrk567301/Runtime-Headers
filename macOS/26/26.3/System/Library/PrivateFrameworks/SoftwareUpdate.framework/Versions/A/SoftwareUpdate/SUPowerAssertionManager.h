@class NSMutableDictionary;

@interface SUPowerAssertionManager : NSObject {
    NSMutableDictionary *_assertionDict;
}

- (id)init;
- (void)dealloc;
- (void)cancelPowerAssertionWithDescription:(id)a0;
- (void)createPowerAssertionWithDescription:(id)a0;
- (void)createPowerAssertionWithType:(struct __CFString { } *)a0 timeout:(double)a1 andDescription:(id)a2;

@end
