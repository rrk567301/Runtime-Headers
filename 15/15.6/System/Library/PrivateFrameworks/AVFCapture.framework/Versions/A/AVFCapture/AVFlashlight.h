@class AVFlashlightInternal;

@interface AVFlashlight : NSObject {
    AVFlashlightInternal *_internal;
}

@property (readonly, nonatomic, getter=isAvailable) char available;
@property (readonly, nonatomic, getter=isOverheated) char overheated;
@property (readonly, nonatomic) float flashlightLevel;
@property (readonly, nonatomic) char beamWidthControlSupported;
@property (readonly, nonatomic) float minBeamWidth;
@property (readonly, nonatomic) float maxBeamWidth;
@property (nonatomic) float beamWidth;

+ (void)initialize;
+ (char)hasFlashlight;

- (void)dealloc;
- (id)init;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_reconnectToServer;
- (void)_setupFlashlight;
- (void)_teardownFlashlight;
- (char)setFlashlightLevel:(float)a0 withError:(id *)a1;
- (void)turnPowerOff;
- (char)turnPowerOnWithError:(id *)a0;

@end
