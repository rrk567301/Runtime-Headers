@interface AXVWindowManager : NSObject

@property (nonatomic, setter=_setLowestLevelWindowID:) long long _lowestLevelWindowID;
@property (nonatomic, setter=_setLowestWindowLevel:) long long _lowestWindowLevel;

+ (id)sharedWindowManager;
+ (id)sharedCaptionWindow;
+ (id)sharedMenuWindow;
+ (id)sharedRotorWindow;
+ (id)sharedSearchWindow;
+ (id)sharedOverlayWindowForAllScreens;
+ (id)sharedBrailleWindow;
+ (id)sharedSpeechMenuWindow;
+ (void)_newWindowCreated:(id)a0;
+ (unsigned long long)_sharedSpaceID;
+ (void)setShowsWindowsAboveLoginWindow:(BOOL)a0;
+ (long long)lowestLevelWindowIDForScreenShotExclusion;

- (id)init;
- (void)_updateLowestWindowLevelWithWindow:(id)a0;

@end
