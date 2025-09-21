@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (void)dealloc;
- (id)init;
- (char)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (char)isAlsSupported;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;

@end
