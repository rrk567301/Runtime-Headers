@interface NSWindowSharingHostButtonVisualProvider : NSButtonAppearanceBasedVisualProvider

+ (struct __CFDictionary { } *)coreUIBezelDrawOptionsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(char)a1 drawingFocusRing:(char)a2 bezelConfiguration:(id)a3;
+ (struct __CFString { } *)coreUIWidgetNameForConfiguration:(id)a0;
+ (unsigned long long)invalidationsForBezelConfigurationChange:(id)a0 oldConfiguration:(id)a1;
+ (char)useGroupMetricsQuery;

@end
