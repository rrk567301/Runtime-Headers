@interface ATXDemoStackAndWidgetProvider : NSObject

+ (id)_widgetArrayForPrefixKey:(id)a0 countKey:(id)a1 defaults:(id)a2 descriptors:(id)a3;
+ (id)demoStackAndWidgets;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)_shouldShowStackInGallery;
+ (void)startYourEngines;
+ (id)_widgetFromDictionary:(id)a0 descriptors:(id)a1;

@end
