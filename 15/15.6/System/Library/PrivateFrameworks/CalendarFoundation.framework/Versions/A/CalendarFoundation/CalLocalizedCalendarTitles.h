@interface CalLocalizedCalendarTitles : NSObject

+ (id)localizedBirthdayCalendarTitle;
+ (id)localizedDefaultCalendarTitle;
+ (id)localizedDefaultReminderListTitle;
+ (id)localizedScheduledRemindersCalendarTitle;
+ (id)localizedSiriSuggestedEventsCalendarTitle;
+ (id)localizedTitleForTitle:(id)a0 isSuggestedEventCalendar:(char)a1 isBirthdayCalendar:(char)a2 allowsReminders:(char)a3 isIntegrationCalendar:(char)a4;
+ (id)localizedVirtualCalendarTitle;

@end
