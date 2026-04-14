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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deactivate;
- (void)activate;
- (void)userBrightnessChanged;
- (void)configureDisplays;

@end
