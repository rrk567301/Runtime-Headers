@interface CalChronometry : NSObject

+ (void)initialize;
+ (id)currentLanguageCode;
+ (void)_configureChronometry;
+ (void)_currentLocaleDidChange:(id)a0;
+ (void)_currentTimeZoneDidChange:(id)a0;
+ (void)_updateActiveCalendar;
+ (void)_updateActiveTimeZone;
+ (void)_updateEveything;
+ (void)_updateForLocaleChange;
+ (id)activeCalendar;
+ (id)activeTimeZone;
+ (id)currentLocationCode;
+ (void)setActiveTimeZone:(id)a0;

@end
