@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)isAlsSupported;
- (void)dealloc;
- (void)registerNotificationBlock:(id /* block */)a0;
- (id)init;

@end
