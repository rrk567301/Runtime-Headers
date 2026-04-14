@interface NCWidgetController : NSObject

+ (id)defaultWidgetController;
+ (id)widgetController;

- (id)init;
- (id)__init;
- (void)setHasContent:(BOOL)a0 forWidgetWithBundleIdentifier:(id)a1;
- (void)_setSystemTemperatureUnit:(BOOL)a0;

@end
