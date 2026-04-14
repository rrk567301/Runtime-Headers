@interface UINSGameModuleSwipe : UINSGameModuleDigitizer

@property double distance;
@property double duration;
@property struct CGPoint { double x; double y; } normalizedLocation;

+ (id)name;

- (id)initWithConfiguration:(id)a0;
- (id)init;
- (id)configuration;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)_resetSwipeDefaults;
- (void)applyUserDefaults;
- (void)logAnalyticsPayload:(id)a0;

@end
