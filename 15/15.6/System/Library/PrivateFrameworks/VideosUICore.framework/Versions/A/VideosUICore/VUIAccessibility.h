@interface VUIAccessibility : NSObject

+ (id)sharedInstance;
+ (char)isFeatureEnabled:(long long)a0;
+ (id)axLabelsForElements:(id)a0;
+ (id)combinedAXLabelForElements:(id)a0;
+ (char)isAXLargeEnabled:(unsigned long long)a0;
+ (char)isAXSmallEnabled:(unsigned long long)a0;
+ (char)contentSizeCategoryIsAccessibility:(unsigned long long)a0;
+ (id)makeAccessibilityIdentifierString:(id)a0 additionalString:(id)a1;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_addObserverToAccessibilityNotifications;
- (void)_didChangeDisplayOptions;

@end
