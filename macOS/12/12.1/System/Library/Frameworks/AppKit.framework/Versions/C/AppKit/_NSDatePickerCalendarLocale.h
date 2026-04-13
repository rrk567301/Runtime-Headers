@class NSCalendar, NSLocale;

@interface _NSDatePickerCalendarLocale : NSLocale {
    NSLocale *_locale;
    NSCalendar *_calendar;
}

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)_prefs;
- (id)initWithLocale:(id)a0 calendar:(id)a1;

@end
