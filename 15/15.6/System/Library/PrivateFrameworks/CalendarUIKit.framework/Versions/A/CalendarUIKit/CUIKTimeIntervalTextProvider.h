@interface CUIKTimeIntervalTextProvider : NSObject

+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 font:(struct __CTFont { } *)a3;
+ (id)_dateFormatterWithCalendar:(id)a0 designatorRequiresWhitespace:(char)a1 dateHasZeroMinutes:(char)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfAnnontatedTime:(id)a0 matchingPattern:(id /* block */)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfDesignatorInAnnotatedTime:(id)a0;
+ (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1;
+ (id)_timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 designatorRequiresWhitespace:(char)a3 smallCapsAllowed:(char)a4 dropLeftRedundantDesignator:(char)a5 keepRedundantDesignator:(char)a6;
+ (char)_use24HourFormatForLocale:(id)a0;
+ (void)force24HourFormatForUnitTests:(char)a0 withLocale:(id)a1;
+ (void)resetForce24HourFormatForUnitTests;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 font:(struct __CTFont { } *)a3 designatorRequiresWhitespace:(char)a4 smallCapsAllowed:(char)a5 dropLeftRedundantDesignator:(char)a6;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 keepRedundantDesignator:(char)a3;

@end
