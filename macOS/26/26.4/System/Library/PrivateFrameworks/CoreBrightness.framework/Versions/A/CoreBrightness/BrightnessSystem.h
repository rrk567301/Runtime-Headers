@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (BOOL)isAlsSupported;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)init;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)dealloc;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;

@end
