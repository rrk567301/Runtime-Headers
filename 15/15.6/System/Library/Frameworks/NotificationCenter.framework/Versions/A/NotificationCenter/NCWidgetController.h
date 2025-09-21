@interface NCWidgetController : NSObject

+ (id)defaultWidgetController;
+ (id)widgetController;

- (id)init;
- (id)__init;
- (void)_setSystemTemperatureUnit:(char)a0;
- (void)setHasContent:(char)a0 forWidgetWithBundleIdentifier:(id)a1;

@end
