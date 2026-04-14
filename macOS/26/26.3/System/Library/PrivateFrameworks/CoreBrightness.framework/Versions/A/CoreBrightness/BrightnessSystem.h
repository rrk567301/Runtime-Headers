@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (BOOL)isAlsSupported;
- (id)init;
- (id)copyPropertyForKey:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;

@end
