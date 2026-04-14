@interface CalChronometry : NSObject

+ (void)initialize;
+ (id)currentLanguageCode;
+ (void)_currentLocaleDidChange:(id)a0;
+ (void)_currentTimeZoneDidChange:(id)a0;
+ (void)_updateForLocaleChange;
+ (void)_configureChronometry;
+ (void)_updateEveything;
+ (id)activeTimeZone;
+ (void)setActiveTimeZone:(id)a0;
+ (void)_updateActiveTimeZone;
+ (void)_updateActiveCalendar;
+ (id)activeCalendar;
+ (id)currentLocationCode;

@end
