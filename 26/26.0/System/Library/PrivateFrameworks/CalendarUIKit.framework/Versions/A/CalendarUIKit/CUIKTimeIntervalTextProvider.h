@interface CUIKTimeIntervalTextProvider : NSObject

+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 font:(struct __CTFont { } *)a3;
+ (id)CUIKSmallCapAMPMTimezoneClarificationStringForStartDate:(id)a0 endDate:(id)a1 startTimeZone:(id)a2 endTimeZone:(id)a3 color:(id)a4;
+ (id)_dateFormatterWithCalendar:(id)a0 designatorRequiresWhitespace:(BOOL)a1 dateHasZeroMinutes:(BOOL)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfAnnontatedTime:(id)a0 matchingPattern:(id /* block */)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfDesignatorInAnnotatedTime:(id)a0;
+ (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1;
+ (id)_timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 textProviderUtils:(id)a3;
+ (BOOL)_use24HourFormatForLocale:(id)a0;
+ (id)attributedAndSmallCappedDesignatorTextWithDate:(id)a0 calendar:(id)a1 color:(id)a2;
+ (void)force24HourFormatForUnitTests:(BOOL)a0 withLocale:(id)a1;
+ (void)resetForce24HourFormatForUnitTests;
+ (id)timeIntervalAttributedAndSmallCappedDesignatorTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 color:(id)a3 font:(id)a4;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 font:(struct __CTFont { } *)a3 designatorRequiresWhitespace:(BOOL)a4 smallCapsAllowed:(BOOL)a5 dropLeftRedundantDesignator:(BOOL)a6;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 font:(struct __CTFont { } *)a3 textProviderUtils:(id)a4;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 keepRedundantDesignator:(BOOL)a3;

@end
