@class AVFlashlightInternal;

@interface AVFlashlight : NSObject {
    AVFlashlightInternal *_internal;
}

@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic, getter=isOverheated) BOOL overheated;
@property (readonly, nonatomic) float flashlightLevel;

+ (void)initialize;
+ (BOOL)hasFlashlight;

- (void)dealloc;
- (id)init;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_setupFlashlight;
- (void)_teardownFlashlight;
- (BOOL)turnPowerOnWithError:(id *)a0;
- (void)turnPowerOff;
- (BOOL)setFlashlightLevel:(float)a0 withError:(id *)a1;
- (void)_reconnectToServer;

@end
