@interface CalUIOccurrenceUtilities : NSObject

+ (void)load;
+ (id)dotIconTextDifferencesForFontSize;
+ (id)timeTitleDifferenceForFontSize;
+ (id)lineHeightPaddingForFontSize;
+ (BOOL)shouldClarifyTimeZone:(id)a0;
+ (BOOL)shouldEventClarifyTimeZoneTime:(id)a0;
+ (id)stringForEvent:(id)a0 time:(id)a1 inEventTimeZone:(BOOL)a2;

@end
