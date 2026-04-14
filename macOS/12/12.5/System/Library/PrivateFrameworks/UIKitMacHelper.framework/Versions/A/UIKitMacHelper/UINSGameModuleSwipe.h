@interface UINSGameModuleSwipe : UINSGameModuleDigitizer

@property double distance;
@property double duration;
@property struct CGPoint { double x; double y; } normalizedLocation;

+ (id)name;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (id)configuration;
- (void)applyUserDefaults;
- (void)logAnalyticsPayload:(id)a0;
- (void)_resetSwipeDefaults;

@end
