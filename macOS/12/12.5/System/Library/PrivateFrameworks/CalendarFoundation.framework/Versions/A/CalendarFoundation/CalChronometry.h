@interface CalChronometry : NSObject

+ (void)initialize;
+ (id)currentLanguageCode;
+ (id)activeTimeZone;
+ (id)activeCalendar;
+ (void)_configureChronometry;
+ (void)_updateActiveCalendar;
+ (void)_currentLocaleDidChange:(id)a0;
+ (void)_currentTimeZoneDidChange:(id)a0;
+ (void)_updateForLocaleChange;
+ (void)_updateEveything;
+ (void)_updateActiveTimeZone;
+ (void)setActiveTimeZone:(id)a0;
+ (id)currentLocationCode;

@end
