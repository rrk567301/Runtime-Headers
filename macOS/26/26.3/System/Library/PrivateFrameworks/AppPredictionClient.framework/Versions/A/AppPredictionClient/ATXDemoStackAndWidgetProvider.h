@interface ATXDemoStackAndWidgetProvider : NSObject

+ (id)demoStackAndWidgets;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)_shouldShowStackInGallery;
+ (id)_widgetFromDictionary:(id)a0 descriptors:(id)a1;
+ (void)startYourEngines;
+ (id)_widgetArrayForPrefixKey:(id)a0 countKey:(id)a1 defaults:(id)a2 descriptors:(id)a3;

@end
