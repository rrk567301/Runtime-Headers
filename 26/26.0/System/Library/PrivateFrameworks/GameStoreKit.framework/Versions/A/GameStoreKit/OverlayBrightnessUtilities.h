@class OverlayTrackedDisplay;

@interface OverlayBrightnessUtilities : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _displaysLock;
    OverlayTrackedDisplay *_trackedDisplay;
    float _trackedBrightness;
    BOOL _expectingBrightnessChange;
    BOOL _activated;
}

@property (nonatomic) BOOL canModifyBrightness;
@property (nonatomic) float brightness;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;
- (void)userBrightnessChanged;
- (void)configureDisplays;

@end
