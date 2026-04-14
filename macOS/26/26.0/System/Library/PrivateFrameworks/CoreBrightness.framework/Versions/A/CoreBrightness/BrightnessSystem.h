@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (id)copyPropertyForKey:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (BOOL)isAlsSupported;
- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)init;
- (void)registerNotificationBlock:(id /* block */)a0;

@end
