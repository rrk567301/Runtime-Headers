@interface CalUIOccurrenceUtilities : NSObject

+ (void)load;
+ (id)dotIconTextDifferencesForFontSize;
+ (BOOL)shouldEventClarifyTimeZoneTime:(id)a0;
+ (BOOL)shouldClarifyTimeZone:(id)a0;
+ (id)timeTitleDifferenceForFontSize;
+ (id)lineHeightPaddingForFontSize;
+ (id)stringForEvent:(id)a0 time:(id)a1 inEventTimeZone:(BOOL)a2;

@end
