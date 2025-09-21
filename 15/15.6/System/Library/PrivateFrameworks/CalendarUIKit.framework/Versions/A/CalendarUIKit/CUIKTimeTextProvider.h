@interface CUIKTimeTextProvider : NSObject

+ (id)timeAttributedTextWithDate:(id)a0 calendar:(id)a1 font:(id)a2 options:(long long)a3;
+ (id)_applyFont:(id)a0 toString:(id)a1 allowSmallCaps:(char)a2;
+ (id)_dateFormatterWithCalendar:(id)a0 dropDesignator:(char)a1 designatorRequiresWhitespace:(char)a2 retainZeroMinutes:(char)a3 dateHasZeroMinutes:(char)a4 addDate:(char)a5;
+ (id)_timeAttributedTextWithDate:(id)a0 calendar:(id)a1 droppingDesignator:(char)a2 designatorRequiresWhitespace:(char)a3 smallCapsAllowed:(char)a4 retainZeroMinutes:(char)a5 addDate:(char)a6;
+ (char)_use24HourFormatForLocale:(id)a0;
+ (void)force24HourFormatForUnitTests:(char)a0 withLocale:(id)a1;
+ (void)resetForce24HourFormatForUnitTests;
+ (id)timeAttributedTextWithDate:(id)a0 calendar:(id)a1;

@end
