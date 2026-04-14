@interface AXVWindowManager : NSObject

@property (nonatomic, setter=_setLowestLevelWindowID:) long long _lowestLevelWindowID;
@property (nonatomic, setter=_setLowestWindowLevel:) long long _lowestWindowLevel;

+ (unsigned long long)_sharedSpaceID;
+ (id)sharedOverlayWindowForAllScreens;
+ (long long)lowestLevelWindowIDForScreenShotExclusion;
+ (void)_newWindowCreated:(id)a0;
+ (id)sharedWindowManager;
+ (id)sharedCaptionWindow;
+ (id)sharedMenuWindow;
+ (id)sharedRotorWindow;
+ (id)sharedSearchWindow;
+ (id)sharedBrailleWindow;
+ (id)sharedSpeechMenuWindow;
+ (void)setShowsWindowsAboveLoginWindow:(BOOL)a0;

- (id)init;
- (void)_updateLowestWindowLevelWithWindow:(id)a0;

@end
